#include<bits/stdc++.h>
using namespace std;
	
int add(int arr[], int n, int x)
{
	if(n == 0)
	{
		return 0;
	}
	if(arr[0] == x)
	{
		return 0;
	}
	int index = add(arr+1, n-1, x);
	if(index == -1)
	{
		return -1;
	}
	else
	{
		return 1 + index;
	}
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
	
	cout<<"Enter The Element To Check Index : ";
	int x; cin>>x;
	cout<<add(arr, n, x);
	return 0;
}