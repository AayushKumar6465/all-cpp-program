#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int n1, int brr[], int n2)
{
	int i,j;
	int crr[20];
	for(i=0;i<n1;i++)
	{
		crr[i] = arr[i];  
	}
	for(j=0;j<n2;j++)
	{
		crr[j] = brr[j];
	}
	int p = sizeof(crr)/sizeof(crr[0]);
	for(int k=0;k<p;k++)
	{
		cout<<crr[p]<<" ";
	}
}
int main()
{
	int arr1[] = {3,5,9,12,14,18,20,23};
	int arr2[] = {1,5,6,9,14,15,19};
	
	int size1 = sizeof(arr1)/sizeof(arr1[0]);
	int size2 = sizeof(arr2)/sizeof(arr2[0]);
	
	merge(arr1, size1, arr2, size2);
	return 0;
}