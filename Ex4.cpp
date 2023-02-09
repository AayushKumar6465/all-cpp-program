#include<bits/stdc++.h>
using namespace std;

//Sort 0 And 1 In An Array
void sort(int arr[], int n)
{
	int i;
	int count = 0;
	for(i=0;i<n;i++)
	{
		if(arr[i] == 0)
		{
			count++;
		}
	}
	for(i=0;i<count;i++)
	{
		arr[i] = 0;
	}
	for(i=count;i<n;i++)
	{
		arr[i] = 1;
	}
}
int main()
{
	int n; cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	sort(arr, n);
	cout<<"After Sorting: ";
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}