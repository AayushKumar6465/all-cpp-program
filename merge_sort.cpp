#include<bits/stdc++.h>
using namespace std;

void merge(int *arr, int s, int e)
{
	int mid = (s+e)/2;
	
	int l1 = mid - s + 1;
	int l2 = e - mid;
	
	int *first = new int[l1];
	int *second = new int[l2];
	
	//Copy Left Arrays
	int mainarrayindex = s;
	for(int i=0; i<l1; i++)
	{
		first[i] = arr[mainarrayindex++];
	}
	
	//Copy Right Array
	mainarrayindex = mid+1;
	for(int i=0; i<l2; i++)
	{
		second[i] = arr[mainarrayindex++];
	}
	
	//Merge Two Arrays
	int i = 0, j = 0, k = s;
	while(i < l1 && j < l2)
	{
		if(first[i] < second[j])
		{
			arr[k++] = first[i++];
		}
		else
		{
			arr[k++] = second[j++];
		}
	}
	while(i < l1)
	{
		arr[k++] = first[i++];
	}
	while(j < l2)
	{
		arr[k++] = second[j++];
	}
	delete []first;
	delete []second;
}
void merge_sort(int arr[], int s, int e)
{
	if(s >= e)
	{
		return;
	}
	int mid = (s+e)/2;
	//left array merge
	merge_sort(arr, s, mid);
	
	//Right array merge
	merge_sort(arr, mid+1, e);
	
	//Merge Both
	merge(arr, s, e);
}
int main()
{
	int arr[] = {3,7,0,1,5,9,2,6};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	merge_sort(arr, 0, n-1);
	
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}