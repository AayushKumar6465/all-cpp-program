#include<iostream>
using namespace std;

int get_min(int arr[], int size)
{
	int mini = INT_MAX;
	for(int i=0;i<size;i++)
	{
		mini = min(mini, arr[i]);
		//if(arr[i]<min)
		//{
		//	min = arr[i];
		//}
	}
	return mini;
}
/*int search(int arr[], int n)
{
	int add =0;
	for(int i=0;i<5;i++)
	{
		add = add + arr[i];	
	}
	return add;
}*/

int main()
{
	int arr[100],n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	//great = max()
	//int greatest = 
	cout<<get_min(arr, n);
	//cout<<greatest; 
	/*int size = sizeof(arr)/sizeof(int);
	cout<<size;
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<" ";
	}
	{2,1,5,3,4};
	cout<<arr;
	int sum = search(arr, 5);
	cout<<"sum Is : "<<sum<<endl;*/
	return 0;
}