#include<bits/stdc++.h>
using namespace std;

void duplicate(int arr[], int n)
{
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(arr[i] == arr[j])
			{
				cout<<arr[j]<<" ";
			}
		}
	}
}
int main()
{
	int n; cin>>n;
	int *arr = new int [n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cout<<endl;
	duplicate(arr, n);
	return 0;
}