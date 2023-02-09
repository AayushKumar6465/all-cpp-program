#include<bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n, int d)
{
	int p=1;   //Counter Variable
	while(p <= d)
	{
		int last = arr[0];
		for(int i=0; i<n-1; i++)
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
	for(int i=0; i<n; i++) //Taking Input 
	{
		cin>>arr[i];
	}
	
	cout<<"How Many Elements You Want To Rotate In The Array : ";
	int d; cin>>d;
	
	rotate(arr, n, d);  //Calling Rotate Function
	
	for(int i=0;i<n;i++)   //Print Totated Array
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}