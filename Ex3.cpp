#include<bits/stdc++.h>
using namespace std;

void pair_sum(int arr[], int n, int x)
{
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(i != j)
			{
				if((arr[i] + arr[j]) == x)
				{
					cout<<arr[i]<<" "<<arr[j]<<endl;
					//(i<j) ? (cout<<arr[i]<<" "<<arr[j]<<endl) : (cout<<arr[i]<<" "<<arr[j]<<endl);
				}
			}
		}
	}	
}
void triplet_sum(int arr[], int n, int x)
{
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			for(int k=j+1; j<n; j++)
			{
				if((arr[i] + arr[j] + arr[k]) == x);
				{
					cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
				}
			}
		}
	}	
}
int main()
{
	int n,x;
	cout<<"Enter The Elements : ";
	cin>>n;
	int arr[n];
	cout<<"\nEnter The Elements Of Array Is : ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"\nEnter Value For Sum : ";
	cin>>x;
	pair_sum(arr, n, x);
	cout<<endl;
	triplet_sum(arr, n, x);
	return 0;
}