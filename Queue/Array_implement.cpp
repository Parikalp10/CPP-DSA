#include<iostream>
using namespace std;

class Queue
{
    int*a;
    int f;
    int r;
    int cs;
    int ms;
public:
    Queue(int ds=5)
    {
        a=new int[ds];
        f=0;
        ms=ds;
        r=ms-1;
        cs=0;
    }
    bool full()
    {
        return cs==ms;
    }
    bool empt()
    {
        return cs==0;
    }
    void push(int d)
    {
        if(!full()){
            r=(r+1)%ms;
            a[r]=d;
            cs++;
        }
    }
    void pop()
    {
        if(!empt()){
            f=(f+1)%ms;
            cs--;

        }
    }
    int frnt()
    {
        return a[f];
    }
    ~Queue()
    {
        if(a!=NULL){
            delete []a;
            a=NULL;
        }
    }
};

int main()
{
    Queue q;
    for(int i=0;i<5;i++){
        q.push(i);
    }
    q.pop();
    q.push(69);
    while(!q.empt()){
        cout<<q.frnt()<<endl;
        q.pop();
    }
}
