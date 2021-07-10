#include<iostream>
#include<string>
using namespace std;
bool up(char ch){
	if(ch>='A' and ch<='Z'){
		return true;
	}
	else{
		return false;
	}
}
int main() {
	string s;
	int i;
	cin>>s;
	cout<<s[0];
	for(i=1;i<s.length();i++){
		if(up(s[i])){
			cout<<endl<<s[i];
		}
		else{
			cout<<s[i];
		}
	}
	return 0;
}
