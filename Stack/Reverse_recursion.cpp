#include<iostream>
#include<stack>
using namespace std;

void insertin(stack<int>&s,int x)
{
    if(s.empty()){
        s.push(x);
        return;
    }
    int data=s.top();
    s.pop();
    insertin(s,x);
    s.push(data);
}

void rev(stack<int>&s)
{
    if(s.empty()){
        return;
    }
    int x=s.top();
    s.pop();
    rev(s);
    insertin(s,x);
}

int main()
{
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    rev(s);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}
