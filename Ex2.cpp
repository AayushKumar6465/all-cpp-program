#include<bits/stdc++.h>
using namespace std;

int duplicate_number(int arr[], int n)
{
	int i,j;
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(arr[i] == arr[j])
			{
				cout<<arr[i]<<" ";
				break;
			}
		}
	}
	return -1;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	duplicate_number(arr, n);
	return 0;
}