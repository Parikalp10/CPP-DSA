#include<iostream>
using namespace std;

class node
{
public:
    int data;
    node*next;//self referential pointer
    //constructor
    node(int d)
    {
        data=d;
        next=NULL;
    }

};

void insertin(node*&head,int d)
{
    if(head==NULL){
        head= new node(d);
        return;
    }
    node*tail=head;
    while(tail->next!=NULL){
        tail=tail->next;}
    tail->next= new node(d);
}
void print(node*head)
{
    while(head!=NULL){
        cout<<(*head).data<<" ";
        head=(*head).next;
    }
    cout<<endl;
}
void rev(node*&head)
{
    node*C=head;
    node*P=NULL;
    node*temp;
    while(C!=NULL){
            //storing the next node
        temp=C->next;
        C->next=P;
        P=C;
        C=temp;
    }
    head=P;
}

bool pal(node*head,int n)
{
    node*fast=head->next;
    node*slow=head;
    while(fast!=NULL and fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }

    node*head2=slow->next;
    slow->next=NULL;
    rev(head2);
    while(head2!=NULL){
        if(head->data!=head2->data){
            return false;
        }
        head2=head2->next;
        head=head->next;
    }
    return true;

}

int main()
{
    node*head=NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        insertin(head,a);
    }
    if(pal(head,n)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

}
