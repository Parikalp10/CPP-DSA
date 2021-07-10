#include<iostream>
using namespace std;
int main() {
	int freq[255]={0},i,c;
	char ch,str[1000];
	cin>>str;
	i=0;
	while(str[i]!='\0'){
		freq[str[i]]++;
		i++;
	}
	int m=0;
	for(c=0;c<256;c++){
		if(freq[c]>m){
			m=freq[c];
			ch=(char)c;
		}
	}
	cout<<ch;
	return 0;
}
