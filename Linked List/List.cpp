#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int>l1;
    //initialization
    list<int>l{1,2,3,4,5};
    for(auto z:l){
        cout<<z<<"->";
    }
    cout<<endl;
    list<string>s{"Batman","Thor","Cap","Iron Man","Superman"};
    //insert at end
    s.push_back("Hulk");
    //sort
    s.sort();
    //reverse
    s.reverse();
    //deleting first element
    s.pop_front();
    //insert at front
    s.push_front("Black Widow");
    for(auto z:s){
        cout<<z<<"->";
    }
    cout<<endl;
    string r;
    cin>>r;
    s.remove(r);
    for(auto z:s){
        cout<<z<<"->";
    }
}
