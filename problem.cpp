#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m;
	cin>>m;
	int count=0;
	int N=1;
	while(N<=m)
	{
		if((3*N + 2)%4 == 0)
		{
			count++;
		}
		else
		{
			cout<<3*N+2<<" ";
		}
		N++;
	}
	return 0;
}