#include<bits/stdc++.h>
using namespace std;
 
 bool is_sorted(int arr[], int n)
 {
 	if(n == 0 || n == 1)
 	{
 		return true;	
	}
	
	if(arr[0] > arr[1])
	{
		return false;
	}
	else
	{
		bool remain_part = is_sorted(arr+1, n-1);
		return  remain_part;
	}
 }
int main()
{
	int arr[7] = {2,4,6,8,8,12,15};
	int size = 7;
	
	bool ans = is_sorted(arr, size);
	(ans == 1) ? (cout<<"Array Is Sorted") : (cout<<"Array Is Not Sorted");
	return 0;
}