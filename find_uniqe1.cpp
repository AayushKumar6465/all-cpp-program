#include<bits/stdc++.h>
using namespace std;

void find_unique(int arr[],int n)
{
	int count=1;
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if( arr[i]==arr[j] && i!=j )
			{
				break;
			}
		}
		if(j==n)
		{
			cout<<"\nThe Unique Number [ "<<count<<" ]"<<" is "<<arr[i];
			count++;
		}
	}
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
	find_unique(arr,n);
	return 0;
}