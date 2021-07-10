#include<iostream>
#include<stack>
using namespace std;
//O(N) since pushing and popping elements just once
void stock(int n,int price[],int span[])
{
    stack<int>s;
    s.push(0);
    span[0]=1;
    for(int i=1;i<n;i++){
        int current=price[i];
        while(!s.empty() and price[s.top()]<=current){
            s.pop();
        }
        if(!s.empty()){
            int prev=s.top();
            span[i]=i-prev;
        }
        else{
            span[i]=i+1;
        }
        s.push(i);
    }

}

int main()
{
    int price[]={100,80,60,70,60,75,85};
    int n=sizeof(price)/sizeof(int);
    int span[1000]={0};
    stock(n,price,span);
    for(int i=0;i<n;i++){
        cout<<span[i]<<" ";
    }
}

