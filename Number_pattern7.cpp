#include<iostream>
using namespace std;

int main()
{
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
		int k=i-1;
		while(k>=1)
		{
			cout<<k;
			k--;
		}
		cout<<endl;
		i++;
	}
	return 0;
}
