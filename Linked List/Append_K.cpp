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


node* append(int n,int k,node*head){
	node*curr=head; node*prev;
	for(int i=0;i<n-k;i++){
		prev=curr;
		curr=curr->next;
	}
		prev->next=NULL;
		node*temp=curr;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=head;
		head=curr;
		return curr;
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
	int k;
	cin>>k;
	k=k%n;
	if(k>0)
		head=append(n,k,head);
    print(head);

}
