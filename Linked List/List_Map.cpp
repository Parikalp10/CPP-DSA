#include<iostream>
#include<list>
using namespace std;

int main()
{
    int n;
    cin>>n;
    list<pair<int,int>>*l;
    l=new list<pair<int,int>>[n];
    int e;
    cin>>e;
    for(int i=0;i<e;i++){
        int x,y,wt;
        cin>>x>>y>>wt;
        l[x].push_back(make_pair(y,wt));
        l[y].push_back(make_pair(x,wt));
    }
    for(int i=0;i<n;i++){
            cout<<"Linked List "<<i<<"->";
        for(auto x:l[i]){
            cout<<"("<<x.first<<","<<x.second<<")";
        }
        cout<<endl;
    }


}
