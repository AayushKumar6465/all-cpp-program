#include <iostream>
using namespace std;

int find_unique(int arr[], int n)
{
	int i,j;
	int count = 1;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(arr[i] == arr[j] && i != j)
			break;
		}
		if(j == n)
		{
			cout << "\The Unique Element Is [" << count << "]" << " : " << arr[i] << endl;
			++count;
		}
	}
	return -1;
}
int main()
{
	int n,i;
	cout << "Enter the number of elements : ";
	cin >> n;	
	int arr[n];	
	cout << "Input the array elements : ";
	for(i = 0; i < n; i++)	
	{
		cin >> arr[i];
	}
	find_unique(arr, n);
	return 0;
}
