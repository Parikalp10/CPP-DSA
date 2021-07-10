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
    n->next=head;
    head=n;
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
node*mid(node*head)
{
    if(head==NULL or head->next==NULL){
        return head;
    }
    node*fast=head->next;
    node*slow=head;
    while(fast!=NULL and fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}
node*merging(node*a,node*b)
{
    if(a==NULL){
        return b;
    }
    if(b==NULL){
        return a;
    }
    node*c;
    if(a->data > b->data){
        c=b;
        c->next=merging(a,b->next);
    }
    else{
        c=a;
        c->next=merging(a->next,b);
    }
    return c;
}
node*msort(node*head)
{
    if(head==NULL or head->next==NULL){
        return head;
    }
    node*middle=mid(head);
    node*a=head;
    node*b=middle->next;
    middle->next=NULL;

    a=msort(a);
    b=msort(b);

    node*c=merging(a,b);
    return c;
}
int main()
{
    //node*head=input();
   node*head;

   cin>>head;
   // print(head);
   cout<<head;
   node*n=msort(head);
   cout<<n;

}


