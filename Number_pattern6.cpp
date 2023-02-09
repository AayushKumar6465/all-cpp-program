#include<bits/stdc++.h>
using namespace std;

int main()
{
	/*int n;
	cin>>n;
	int i=1;
	while(i<=n)
	{
		int j=n;
		while(j>=1)
		{
			cout<<i;
			j--;
		}
		cout<<endl;
		i++;
	}*/
	int n;
	cin>>n;
	int i=1;
	while(i<=n)
	{
		int s=1;
		while(s<=n-i)
		{
			cout<<" ";
			s++;
		}
		int j=1;
		while(j<=i)
		{
			cout<<j;
			j++;
		}
		j=i-1;
		while(j>=1)
		{
			cout<<j;
			j--;
		}
		cout<<endl;
		i++;
	}
	return 0;
}