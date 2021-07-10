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
int main()
{
    //node*head=input();
   node*head;
   node*head2;
   cin>>head>>head2;
   // print(head);
   cout<<head<<head2;
   node*n=merging(head,head2);
   cout<<n;

}

