#include<bits/stdc++.h>
using namespace std;
//Rotate The Array Given Number of Times
void rotate_array(int arr[], int n, int d)
{
	int p=1;
	while(p<=d)
	{
		int last = arr[0];
		for(int i=0; i<n; i++)
		{
			arr[i] = arr[i+1];
		}
		arr[n-1] = last;
		p++;
	}
}
int main()
{
	int n; cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter The Number You Want To Rotate : ";
	int d; cin>>d;
	rotate_array(arr, n, d);
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}