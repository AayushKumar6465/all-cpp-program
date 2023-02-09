#include<bits/stdc++.h>
using namespace std;

void sort_number(int arr[], int n)
{
	int i,count=0;
	for(i=0; i<n; i++)
	{
		if(arr[i]==0)
		{
			count++;
		}
	}
	for(i=0; i<count; i++)
	{
		arr[i] = 0;
	}
	for(i=count; i<n; i++)
	{
		arr[i] = 1;
	}
	for(i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int i, n; 
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort_number(arr, n);
	return 0;	
}