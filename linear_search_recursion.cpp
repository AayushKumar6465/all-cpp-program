#include<bits/stdc++.h>
using namespace std;

bool linear_search(int arr[], int size, int key)
{
	if(size == 0)
	{
		return false;
	}
	
	if(arr[0] == key)
	{
		return true;
	}
	else
	{
		bool remain_part = linear_search(arr+1, size-1, key);
		return remain_part;
	}
}
int main()
{
	int arr[5] = {3,5,1,2,6};
	int size = 5;
	int key = 1;
	bool ans = linear_search(arr, size, key);
	(ans == 1) ? (cout<<"Present") : (cout<<"Present");
	return 0; 
}