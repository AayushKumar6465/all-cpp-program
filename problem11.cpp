#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int n, int k)
{
	int start = 0, end = n-1;
	while(start <= end)
	{
		int mid = (start + end)/2;
		if(arr[mid] == k)
		{
			return mid;
		}
		else if(k < arr[mid])
		{
			end = mid - 1;
		}
		else
		{
			start = mid + 1;
		}
	}
	return -1;
}
int main()
{
	int n; cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter The searching element : ";
	int k; cin>>k;
	cout<<"The Value Is : "<<binary_search(arr, n, k);
	return 0;
}