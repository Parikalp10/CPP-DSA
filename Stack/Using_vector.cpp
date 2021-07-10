#include<iostream>
#include<vector>
using namespace std;

//template class
template<typename T>
class Stack
{
private:
    vector <T> v;
public:
    void push(T data)
    {
        v.push_back(data);
    }
    bool emp()
    {
        return v.size()==0;
    }
    void pop()
    {
        if(!emp())
            v.pop_back();
    }
    T top()
    {
        return v[v.size()-1];
    }
};

int main()
{
    Stack <int>s;
    for(int i=0;i<6;i++){
        s.push(i*i);
    }
    while(!s.emp()){
        cout<<s.top()<<endl;
        s.pop();
    }
    cout<<endl;

    Stack<char>c;
    for(int i=65;i<71;i++){
        c.push(i);
    }
    while(!c.emp()){
        cout<<c.top()<<endl;
        c.pop();
    }


}
