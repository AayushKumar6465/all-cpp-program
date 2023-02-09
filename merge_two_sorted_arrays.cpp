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
int main()
{
	int arr1[] = {10,6,14,34,1,90};
	int arr2[] = {2,12,13,4};
	
	int size1 = sizeof(arr1)/sizeof(arr1[0]);
	int size2 = sizeof(arr2)/sizeof(arr2[0]);
	cout<<sizeof(arr1)<<endl;
	int arr3[size1 + size2] = {0};
	
	merge(arr1, size1, arr2, size2, arr3);
	
	for(int i=0;i<(size1 + size2);i++)
	{
		cout<<arr3[i]<<" ";
	}
	return 0;
}