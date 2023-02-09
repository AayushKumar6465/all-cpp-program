#include<bits/stdc++.h>
using namespace std;

//Push ALL Zeros To The End
void push_zeros_end(int arr[], int n)
{
	int i,k=0;
	for(i=0;i<n;i++)
	{
		if(arr[i] == 0)
		{
			arr[k] = arr[i];
			k++;
		}
	}
	while(k<n)
	{
		arr[k] = 0;
		k++;
	}
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	push_zeros_end(arr, n);
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}