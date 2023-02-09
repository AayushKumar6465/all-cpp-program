#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m,n;
	cin>>m>>n;
	int arr[m][n];
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			cin>>arr[i][j];
		}
	}
	//Addition coloum wise
	for(int j=0; j<n; j++)
	{
		int collum = 0;
		for(int i=0; i<m; i++)
		{
			collum = collum + arr[i][j];
		}
		cout<<collum<<" ";
	}
	//Addition row wise
	for(int i=0; i<m; i++)
	{
		int row = 0;
		for(int j=0; j<n; j++)
		{
			row = row + arr[i][j];
		}
		cout<<row<<" ";
	}
	return 0;
} 