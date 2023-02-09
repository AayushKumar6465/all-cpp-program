#include<bits/stdc++.h>
using namespace std;

void pair_sum(int arr[], int size, int x)
{
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(i!=j)
			{
				if((arr[i] + arr[j]) == x)
				{
					if(i<j)
					{
						cout<<arr[i]<<" "<<arr[j]<<endl;
					}
					else
					{
						cout<<arr[j]<<" "<<arr[i]<<endl;
					}
				}
			}		
		}	
	}
}
int main()
{
	int n; cin>>n;
	int *arr = new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"\nEnter The value Which You Want To Do Pair : ";
	int x; cin>>x;
	pair_sum(arr, n, x);
	delete []arr;
	return 0;
}