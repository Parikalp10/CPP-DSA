#include<iostream>
#include<stack>
using namespace std;

void transfer(stack<int>&s1,stack<int>&s2,int n)
{
    for(int i=0;i<n;i++){
        s2.push(s1.top());
        s1.pop();
    }
}

void rev(stack<int> &s1)
{
    stack<int>s2;
    int n= s1.size();
    for(int i=0;i<n;i++){
        int x=s1.top();
        s1.pop();
        transfer(s1,s2,n-i-1);
        s1.push(x);
        transfer(s2,s1,n-1-i);

    }
}

int main()
{
    stack<int>s;
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    cout<<"Before reverse top element: "<<s.top()<<endl;
    rev(s);
    cout<<"After reverse top element: "<<s.top()<<endl;
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}
