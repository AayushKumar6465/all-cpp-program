#include<bits/stdc++.h>
using namespace std;


void arrange(int arr[],int n)
{
    int i,j=0;
	for(i = 1; i <= n; i++)
	{
		if( i % 2 != 0)
		{
			arr[j] = i;
			j++;
		}
	}
	for(i = n ; i >= 0;i--)
	{
		if( i%2 == 0)
		{
			arr[j] = i;
			j++ ;
		}
	}
}
int main()
{
	int n; cin>>n;
	int arr[100];
	//int n = sizeof(arr)/sizeof(arr[0]);
	arrange(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}