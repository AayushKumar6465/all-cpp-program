#include<bits/stdc++.h>
using namespace std;

void pair_sum(char arr[])
{
	int len = strlen(arr);
	if(arr[0] == arr[1])
	{
		for(int i=len; i>0; i--)
		{
			arr[i+1] = arr[i];
		}
		arr[1] = '*';
		pair_sum(arr + 2);
	}
	else if(arr[1] != '\0')
	{
		pair_sum(arr + 1);
	}
	else
	{
		return;
	}
}
int main()
{
	char arr[20];
	cin.getline(arr, 20);
	pair_sum(arr);
	cout<<arr<<endl;
	return 0;
}