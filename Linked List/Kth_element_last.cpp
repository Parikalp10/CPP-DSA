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
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<endl;
}
node*input()
{
    int d;
    cin>>d;
    node*head=NULL;
    while(d!=-1){
        insertin(head,d);
        cin>>d;
    }
    return head;
}

istream&operator>>(istream&is,node*&head)
{
    head=input();
    return is;
}
ostream&operator<<(ostream&os,node*head)
{
    print(head);
    return os;
}

node*ele(node*head,int k){
	node*fast=head;
	node*slow=head;
	for(int i=0;i<k;i++){
		fast=fast->next;
	}
	while(fast!=NULL){
		fast=fast->next;
		slow=slow->next;
	}
	return slow;
}

int main()
{
    //node*head=input();
   node*head=NULL;
   cin>>head;
   int k;
   cin>>k;
   node*n=ele(head,k);
   cout<<n->data;


}


