/* 
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n],mul=1;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		for(int i=0;i<n;i++)
		{
			mul = mul*arr[i];
		}
		cout<<mul<<endl;
    }
    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		for(int i=0;i<n;i++)
			if(arr[i]%2==0)
				cout<<arr[i]<<" ";
	    cout<<endl;
	    for(int i=0;i<n;i++)
	    	if(arr[i]%2 != 0)
	   			cout<<arr[i]<<" ";
	    return 0;
}