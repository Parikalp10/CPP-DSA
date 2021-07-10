#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<char>l;
    int freq[27]={0};
    char ch;
    cin>>ch;
    //stop when . is encountered
    while(ch!='.'){
        int i=ch-'a';
        l.push(ch);
        freq[i]++;
        while(!l.empty()){
            if(freq[l.front()-'a']>1){
                l.pop();
            }
            else{
                cout<<l.front()<<endl;
                break;
            }
        }
        if(l.empty()){
            cout<<"-1"<<endl;
        }
        cin>>ch;
    }
}
