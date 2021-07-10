#include<iostream>
#include<cstring>
using namespace std;
void remov(char str[])
{
    int i,j=0;
    for(i=1;i<strlen(str);i++){
        if(str[i]!=str[j]){
            j++;
            str[j]=str[i];
        }
    }
    str[j+1]='\0';
}
int main()
{
    char str[100];
    cin.getline(str,100);
    remov(str);
    cout<<str;
    return 0;
}
