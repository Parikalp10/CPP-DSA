#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool comp(string a,string b){
	string X=a.append(b);
	string Y=b.append(a);
		return X>Y;
	}

int main() {
	int t,n,i,j;
	string a[100000];
	cin>>t;
	for(i=0;i<t;i++){
		cin>>n;
		for(j=0;j<n;j++){
			cin>>a[j];
		}
		sort(a,a+n,comp);
		for(j=0;j<n;j++){
			cout<<a[j];
		}
		cout<<endl;
	}
	return 0;
}
