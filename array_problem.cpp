#include<bits/stdc++.h>
using namespace std;

int main()
{
		int n;
		cin>>n;
		int arr[n],even=0,odd=0;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		for(int i=0;i<n;i++)
		{
			if(arr[i]%2==0)
			{
				even = arr[i];
			}
			else
			{
				odd = arr[i];
			}
		}
		cout<<even<<" "<<endl<<odd<<" ";
    	return 0;
}