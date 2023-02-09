#include<bits/stdc++.h>
using namespace std;

//void bubble_sort(int arr[], int n)
//{
//	for(int i=0; i<n; i++)
//	{
//		for(int j=0; j<n-i-1; j++)
//		{
//			if(arr[j] > arr[j+1])
//			{
//				swap(arr[j], arr[j+1]);
//			}
//		}
//	}
//}
int find_unique(int arr[], int n)
{
	int xor_sum = 0;
	for(int i=0; i<n; i++)
	{
		xor_sum = xor_sum ^ arr[i];
	}
	return xor_sum;
}
int main()
{
	int arr[] = {10, 3, 6, 2, 6, 3, 10, 2, 11, 14, 11};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	//bubble_sort(arr, size);
	int ans = find_unique(arr, size);
	cout<<ans<<endl;
	return 0;
}