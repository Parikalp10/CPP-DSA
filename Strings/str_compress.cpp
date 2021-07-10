#include<iostream>
using namespace std;
int main() {
    char c[1000];
    cin>>c;
    char ch=c[0];
	int count=0,i=0;
    while(ch!='\0'){
		if(ch==c[i]){
			count++;
		}
		else{
			cout<<ch<<count;
			ch=c[i];
			count=1;
		}
		i++;
	}
	return 0;
}
