#include<bits/stdc++.h>
using namespace std;

void print_alternate(int arr[], int n)
{
	for(int i=0;i<n;i=i+2)
	{
		if(i+1<n)
		{
			swap(arr[i],arr[i+1]);
		}
	}
	//return 0;
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
	int arr_even[10] = {2,5,6,75,2,4,7,8,9,45};
	int arr_odd[5] = {12,14,17,49,41};
	
	print_alternate(arr_even, 10);
	print_array(arr_even, 10);
	cout<<endl;
	print_alternate(arr_odd, 5);
	print_array(arr_odd, 5);
	
	return 0;
}