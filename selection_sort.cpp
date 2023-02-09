#include<bits/stdc++.h>
using namespace std;

void selection_sorting(int arr[], int n)
{
	for(int i=0;i<n-1;i++)
	{
		int min = arr[i], minindex = i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j] < min)
	        {
	        	min = arr[j];
	        	minindex = j;
			}
	    } 
	    int temp = arr[i];
	    arr[i] = arr[minindex];
	    arr[minindex] = temp;
	}
}
int main()
{
	//int n; cin>>n;
	int arr[] = {9,3,7,5,10,15,24,2,6,1,8};
	int n = sizeof(arr)/sizeof(arr[0]);
//	for(int i=0;i<n;i++)
//	{
//		cin>>arr[n];
//	}
    selection_sorting(arr, n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}