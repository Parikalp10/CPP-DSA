#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool comp(string s,string p){
	int j,flag=1;
	for(j=0;j<min(s.length(),p.length());j++){
		if(s[j]!=p[j]){
			flag=0;
		}
	}
	if(flag==1){
		return s.length()>p.length();
	}
	return s<p;
}


int main() {
	string s[1000];
	int n;
	cin>>n;
	cin.get();
	for(int i=0;i<n;i++){
		getline(cin,s[i]);
	}

	sort(s,s+n,comp);
	for(int i=0;i<n;i++){
		cout<<s[i]<<endl;
	}
	return 0;
}
