#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int *arr, int n)
{
	int i,j;
	for(i=1;i<n;i++)
	{
		int current = arr[i];
		for(j=i-1;j>=0;j--)
		{
			if(current < arr[j])
			{
				arr[j+1] = arr[j];
			}
			else
			{
				break;
			}
		}
		arr[j+1] = current;
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
	int arr[] = {10,3,6,1,9,8,0,12,17,20};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	insertion_sort(arr, size);
	print_array(arr,size);
	return 0;
}