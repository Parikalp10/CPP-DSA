#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool comp(pair<int,int>a,pair<int,int>b)
{
    int c= a.first*a.first + a.second*a.second;
    int d= b.first*b.first + b.second*b.second;
    if(c==d){
        return a.first<b.first;
    }
    return c<d;
}

int main()
{
    int x,y;
    vector<pair<int,int>>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end(),comp);
    for(auto x:v){
        cout<<x.first<<" "<<x.second<<endl;
    }
}
