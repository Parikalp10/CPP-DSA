#include<iostream>
#include<deque>
using namespace std;

int main()
{
    int n,k,a[10000],i;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>k;
    deque<int>d(k);
    // process first k elements
    for(i=0;i<k;i++){
        while(!d.empty() and a[i]>a[d.back()]){
            d.pop_back();
        }
        d.push_back(i);
    }
    //the remaining elements
    for(;i<n;i++){
        cout<<a[d.front()]<<" ";
        //remove the elements not part of the window
        while(!d.empty() and (d.front()<=i-k)){
            d.pop_front();
        }
        //remove the smaller elements,if any
        while(!d.empty() and a[i]>a[d.back()]){
            d.pop_back();
        }
        d.push_back(i);
    }
    cout<<a[d.front()];
}
