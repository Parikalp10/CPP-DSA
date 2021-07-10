#include<iostream>
#include<list>
using namespace std;

class Queue
{
    list<int>q;
    int cs;
public:
    Queue()
    {
        cs=0;
    }
    bool khaali()
    {
        return cs==0;
    }
    void push(int data)
    {
        q.push_back(data);
        cs++;
    }
    void pop()
    {
        if(!khaali()){
        q.pop_front();
        cs--;}
    }
    int saamne()
    {
        return q.front();
    }

};

int main()
{
    Queue q;
    for(int i=0;i<5;i++){
        q.push(i);
    }
    while(!q.khaali()){
        cout<<q.saamne()<<'\t';
        q.pop();
    }

}
