#include<bits/stdc++.h>
using namespace std;

int Binary_Search(int arr[], int n, int val)
{
    int first = 0; 
	int last = n-1;
    int middle = (first+last)/2;
    
	while(first <= last)
	{
		middle = (first + last)/2;
        if(arr[middle] < val)
		{
            first = middle + 1;
        }
        else if( arr[middle] == val)
		{
            return middle;
        }
        else
		{
            last = middle - 1;
            
        }
    }
    if(first > last)
	{
        return -1;
    }
}
int main()
{
	int arr[] = {4, 14, 24, 34, 44, 54, 64, 74, 84, 94};
	int size = sizeof(arr)/sizeof(arr[0]);
	cout<<"Enter The Element Which You Want To Search: ";
	int val; 
	cin>>val;
	int ans = Binary_Search(arr, size, val);
	cout<<ans;
	return 0;
}