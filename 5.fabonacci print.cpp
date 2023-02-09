#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n1,n2,n3;
	n1=0;
	n2=1;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(n1<n)
		{
			cout<<n1<<" ";
			n3 = n1+n2;
			n1 = n2;
			n2 = n3;
		}
		else 
		{
			return 0;	
		}
	}
	return 0;
}