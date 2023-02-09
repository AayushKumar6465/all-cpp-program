#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high)
{
	int pivot_index = arr[high];
	int i = low - 1;
	
	for(int j=low; j<high; j++)
	{
		if(arr[j] < pivot_index)
		{
			i++;
			swap(arr[i], arr[j]);
		}
	}
	i++;
//	int temp = arr[i];
//	arr[i] = pivot_index;
//	arr[high] = temp;
	swap(arr[i], pivot_index);
	return i;
}
void quick_sort(int arr[], int low, int high)
{
	if(low < high)
	{
		int pivot = partition(arr, low, high);
		
		quick_sort(arr, low, pivot-1);
		quick_sort(arr, pivot+1, high);
	}
}
int main()
{
	cout<<"Enter The Size Of Array : ";
	int n; cin>>n;
	
	int *arr = new int[n];
	cout<<"Enter The Elements Of Array Is : \n";
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	
	quick_sort(arr, 0, n-1);
	cout<<"After Quick Sort The Array Is : \n";
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	delete []arr;
	return 0;
}