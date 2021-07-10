#include<iostream>
#include<stack>
using namespace std;

bool isBal(char*s)
{
    stack<char>c;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='(')
            c.push(s[i]);
        else if(s[i]==')'){
            if(c.empty() or c.top()==')'){
                return false;
            }
            else{
                c.pop();
            }
        }
    }
    return c.empty();
}

int main()
{
    char s[100]="((())";
    if(isBal(s)){
        cout<<"Balanced";
    }
    else{
        cout<<"Not Balanced";
    }

}
