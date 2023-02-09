#include<bits/stdc++.h>
using namespace std;

void largest_between_row_and_column(int arr[][100], int m, int n)
{
	int max = 0;
	int index = 0;
	bool is_row = true;
	
	//Calculate Maximum Row
	for(int i=0; i<m; i++)
	{
		int sum = 0;
		for(int j=0; j<n; j++)
		{
			sum = sum + arr[i][j];
		}
		if(max < sum)
		{
			max = sum;
			index = i;
		}
	}
	
	//Calculate Maximum Column
	for(int j=0; j<n; j++)
	{
		int sum = 0;
		for(int i=0; i<m; i++)
		{
			sum = sum + arr[i][j];
		}
		if(max < sum)
		{
			max = sum;
			index = j;
			is_row = false;
		}
	}
	
	//Checking Largest Or Not
	if(is_row)
	{
		cout<<"Row Number "<<index<<" And The Value Is "<<max;
	}
	else
	{
		cout<<"column Number "<<index<<" And The Value Is "<<max;
	}
}
int main()
{
	int arr[100][100];
	int m,n;
	cin>>m>>n;
	
	//Taking Input
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			cin>>arr[i][j];
		}
	}
	// Calling Function
	largest_between_row_and_column(arr, m, n);
	return 0;
}