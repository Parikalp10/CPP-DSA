#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[100]="Hello I am Parikalp";
    char *p=strtok(s," ");
    //only prints the first word
    cout<<p<<endl;
    //prints the second word
    p=strtok(NULL," ");
    cout<<p<<endl;
    //to print all of them, create a loop until p encounters \0 or null
    while(p!='\0'){
        p=strtok(NULL," ");
        cout<<p<<endl;
    }
    return 0;
}
