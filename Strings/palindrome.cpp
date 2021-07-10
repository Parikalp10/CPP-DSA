#include<iostream>
#include<cstring>
using namespace std;
bool pal(char str[])
{
   int i,j;
   i=0;
   j=strlen(str)-1;
   while(i<j){
    if(str[i]==str[j]){
        i++;
        j--;
    }
    else{
        return false;
    }
   }
   return true;
}
int main()
{
    char str[1000];
    cin.getline(str,1000);
    pal(str);
    if(pal(str)){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
    return 0;
}
