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
    node*n=new node(d);
    (*n).next=head;
    head=n;
}
void print(node*head)
{
    while(head!=NULL){
        cout<<(*head).data<<"->";
        head=(*head).next;
    }
    cout<<endl;
}
void deletehead(node*&head)
{
    if(head==NULL){
        return;
    }
    node*temp=head->next;
    delete head;
    head=temp;
}
void linsearch(node*&head,int key)
{
    node*temp=head;
    int cnt=0;
    while(temp!=NULL){
        if(head->data==key){
            cout<<"Found at "<<cnt;
        }
        cnt++;
        head=head->next;
    }
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
    print(head);
    /*insertin(head,4);
    insertin(head,3);
    insertin(head,2);
    insertin(head,1);
    insertin(head,0);
    print(head);
    deletehead(head);
    print(head);
    linsearch(head,2);*/

}
