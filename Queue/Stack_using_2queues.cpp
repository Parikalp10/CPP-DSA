#include<iostream>
#include<queue>
using namespace std;

template<typename t>

class Stack
{
    queue<t> q1,q2;
public:
    void push(t data)
    {
        q1.push(data);
    }
    void pop()
    {
        if(q1.empty()){
            return;
        }
        while(q1.size()>1){
            t temp=q1.front();
            q1.pop();
            q2.push(temp);
        }
        q1.pop();
        swap(q1,q2);
    }
    t top()
    {
        while(q1.size()>1){
            t temp=q1.front();
            q2.push(temp);
            q1.pop();
        }
        t element=q1.front();
        q1.pop();
        q2.push(element);
        swap(q1,q2);
        return element;
    }
    int siz()
    {
        return q1.size()+q2.size();
    }
    bool khaali()
    {
        return siz()==0;
    }
};

int main()
{
    Stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(1);
    while(!s.khaali()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}
