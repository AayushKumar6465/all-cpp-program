#include<bits/stdc++.h>
using namespace std;

bool linear_search(int arr[], int size, int key)
{
	for(int i=0;i<size;i++)
	{
		if(arr[i]==key)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	int key,arr[10] = {10,4,6,8,23,-13,7,-9,-12,5};
	cout<<"Enter The Key Element To Search : ";
	cin>>key;
	bool found_key = linear_search(arr, 10, key);
	if(found_key)
	{
		cout<<"Key Is Present"<<endl;
	}
	else
	{
		cout<<"Key Is Not Present"<<endl;
	}
	return 0;
}