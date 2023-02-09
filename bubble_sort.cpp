#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j] > arr[j+1])
			{
				swap(arr[j], arr[j+1]);
			}
		}
	}
}
void print_array(int arr[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int arr[] = {10,14,25,3,8,5,1};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	bubble_sort(arr,size);
	print_array(arr,size);
	return 0;
}