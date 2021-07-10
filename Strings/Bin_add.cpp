#include<iostream>
#include<string>
using namespace std;
int main(){
	int i,t,j;
	string s1,s2,s3;
	cin>>t;
	for(i=0;i<t;i++){
		cin>>s1>>s2;

		for(j=0;j<s1.length();j++){
			if(s1[j]==s2[j]){
				s3[j]='0';
			}
			else{
				s3[j]='1';
			}
			cout<<s3[j];
		}
		cout<<endl;
	}

	return 0;
}
