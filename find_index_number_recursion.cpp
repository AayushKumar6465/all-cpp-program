#include<bits/stdc++.h>
using namespace std;

int firstindex(int arr[], int n, int k)
{
	if(n < 0)
	{
		return -1;
	}
	if(arr[n] == k)
	{
		return n;
	}
	return firstindex(arr, n-1, k);
}
int main()
{
	int n; cin>>n;
	int *arr = new int[n];
	
	cout<<"Enter The Array Elements Is : \n";
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cout<<"enter The value For Search : ";
	int k; cin>>k;
	cout<<firstindex(arr, n, k);
	return 0;
}