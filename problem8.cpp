#include<bits/stdc++.h>
using namespace std;

selection_sort(int arr[], int n)
{
	for(int i=0;i<n-1;i++)
	{
		int min = arr[i], min_index = i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j] < min)
			{
			 	min = arr[j];
		        min_index = j;	  	
		    }	 			  			
		}
		int temp = arr[i];
		arr[i] = arr[min_index];
		arr[min_index] = temp; 
	}
}
void print_array(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	
	int arr[] = {9,3,1,8,2,5,10,7,20};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	selection_sort(arr,size);
	print_array(arr,size);
	return 0;
}