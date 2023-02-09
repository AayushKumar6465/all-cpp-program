#include<bits/stdc++.h>
using namespace std;

int add(int arr[], int n)
{
	if(n <= 0)
	{
		return 0;
	}
	
	return add(arr, n-1) + arr[n-1];
}
int main()
{
	int arr[] = {3,5,1,8,0,4,6,2};
	int size = sizeof(arr) / sizeof(arr[0]);
	cout<<add(arr, size)<<endl;
	return 0;
}