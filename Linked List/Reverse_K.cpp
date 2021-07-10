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

node *reverse (node *head, int k)
{
    node* current = head;
    node* next = NULL;
    node* prev = NULL;
    int count = 0;

    /*reverse first k nodes of the linked list */
    while (current != NULL && count < k)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }

    /* next is now a pointer to (k+1)th node
    Recursively call for the list starting from current.
    And make rest of the list as next of first node */
    if (next != NULL)
    head->next = reverse(next, k);

    /* prev is new head of the input list */
    return prev;
}



int main()
{
    node*head=NULL;
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        insertin(head,a);
    }
	head=reverse(head,k);
	print(head);

}
