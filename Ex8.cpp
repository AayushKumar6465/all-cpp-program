#include<bits/stdc++.h>
using namespace std;

int second_max(int arr[], int n)
{
	int first_largest = INT_MIN;
	for(int i=0; i<n; i++)
	{
		if(arr[i] > first_largest)
		{
			first_largest = arr[i];
		}
	}
	
	int second_largest = INT_MIN;
	for(int i=0; i<n; i++)
	{
		if(arr[i] > second_largest && arr[i] < first_largest)
		{
			second_largest = arr[i];
		}
	}
	return second_largest;
}
int main()
{
	int n; cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cout<<"The Second Largest Element Is : "<<second_max(arr, n);
	return 0;
}