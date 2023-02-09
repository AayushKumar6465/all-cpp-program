#include<iostream>
using namespace std;

void triplet_sum(int arr[], int size, int x)
{
	/*int temp;
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
		}
	}*/
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			for(int k=j+1;j<size;j++)
			{
				if((arr[i] + arr[j] + arr[k]) == x)
				{
					cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
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
	triplet_sum(arr, n, x);
	return 0;
}