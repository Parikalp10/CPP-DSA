#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int i,n;
    char a[1000],largest[1000];
    int l=0,largest_l=0;
    cin>>n;
    cin.get();
    for(i=0;i<n;i++){
        cin.getline(a,1000);
        l=strlen(a);
        if(l>largest_l){
            largest_l=l;
            strcpy(largest,a);
        }
    }
    cout<<largest<<" "<<largest_l;
    return 0;
}
