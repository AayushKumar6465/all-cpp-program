#include<bits/stdc++.h>
using namespace std;

int unique_number(int arr[], int n)
{
	int i,j;
	int count = 1;
	for(int i = 0; i < n ; i++)
	{
		for(int j = 0; j < n ; j++)
		{
			if(arr[i] == arr[j] && i != j)
			break;
		}
		if(j == n-1)
		{
			cout<<"\nThe Unique Number ["<<count<<"] Is : "<<arr[i]<<endl;
			++count;
		}
	}
	return -1;
}
int main()
{
	int n,i;
	cout<<"Enter The Elements : ";
	cin>>n;
	int arr[n];
	cout<<"\nEnter The Elements Of Array Is : ";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	unique_number(arr, n);
	return 0;
}