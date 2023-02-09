#include<bits/stdc++.h>
using namespace std;

void merge(int arr1[], int n1, int arr2[], int n2, int arr3[])
{
	int i=0, j=0, k=0;
	while(i<n1 && j<n2)
	{
		if(arr1[i] < arr2[j])
		{
			arr3[k++] = arr1[i++];
		}
		else
		{
			arr3[k++] = arr2[j++];
		}
	}
	while(i<n1)
	{
		arr3[k++] = arr1[i++];
	}
	while(j<n2)
	{
		arr3[k++] = arr2[j++];
	}
}
void binary_sort(int arr3[], int n)
{
	for(int i=0; i<n-1; i++)
	{
		for(int j=0; j<n-i-1; j++)
		{
			if(arr3[j] > arr3[j+1])
			{
				swap(arr3[j], arr3[j+1]);
			}
		}	
	}
}
int main()
{
	int arr1[] = {10, 9, 18, 20, 1, 0, 24, 56};
	int arr2[] = {4, 9, 15, 19,30};
	int arr3[13];
	
	int size1 = sizeof(arr1)/sizeof(arr1[0]);
	int size2 = sizeof(arr2)/sizeof(arr2[0]);
	
	merge(arr1, size1, arr2, size2, arr3);
	
	int n = sizeof(arr3)/sizeof(arr3[0]);
	
	binary_sort(arr3, n);
	for(int i=0; i<n; i++)
	{
		cout<<arr3[i]<<" ";
	}
	return 0;
}