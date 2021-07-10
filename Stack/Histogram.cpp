#include<iostream>
#include<stack>
using namespace std;
int main() {
	long long int n;
	cin>>n;
	stack<int> s;
	long long int a[1000000];
	long long int b;
	for(long long int i=0;i<n;i++)
	{
		cin>>a[i];
    }

	long long int max=0;
	long long int t;

	for(int i=0;i<n;i++)
	{
       long long int area=0;
	   while(!s.empty() && a[s.top()]>a[i])
	   {
		    t= s.top();
			s.pop();
		   if(s.empty())
		   {
			   area=a[t]*i;
			}

		   else
		   {
			   area=a[t]*(i-s.top()-1);
			   }
		   if(max<area)
		   {
			   max=area;
		   }
        }
	   s.push(i);

	}
	int i=1;
	while(!s.empty())
	{
		int area=0;
		b=s.top();
		s.pop();
		area=a[b]*i;
		i++;
		if(max<area)
		{
			max=area;
		}

	}
	cout<<max;


	return 0;
}
