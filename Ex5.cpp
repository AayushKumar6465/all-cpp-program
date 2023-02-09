#include<bits/stdc++.h>
using namespace std;

bool linear_search(int arr[], int n, int key)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i] == key)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	int n; 
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the Element You Want To Search : ";
	int key; cin>>key;
	bool m = linear_search(arr, n, key);
	(m == 1) ? (cout<<"Key Is Present") : (cout<<"Key Is Not Present");
	return 0;
}