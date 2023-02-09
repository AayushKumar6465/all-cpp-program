#include<bits/stdc++.h>
using namespace std;

void reverse_array(int array[], int n)
{
	int start = 0, end = n-1;
	while(start<=end)
	{
		swap(array[start], array[end]);
		start++; end--;
	}
}
void print_array(int array[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<array[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int arr[6] = {10,4,6,5,7,15};
	int brr[5] = {4,6,7,9,1};
	
	reverse_array(arr, 6);
	reverse_array(brr, 5);
	
	print_array(arr, 6);
	print_array(brr, 5);
//	for(int i=6;i<0;i--)
//	{
//		cout<<arr[i]<<" ";
//	}
//	cout<<endl;
//	for(int i=5;i<0;i--)
//	{
//		cout<<brr[i]<<" ";
//	}
	
	return 0;
}