#include<bits/stdc++.h>
using namespace std;

void removeX(char arr[])
{
	int len = strlen(arr);
	if(arr[0] == 'x')
	{
		for(int i=0; i<len; i++)
		{
			arr[i] = arr[i+1];
		}
		removeX(arr);
	}
	else if(arr[1] != '\0')
	{
		return removeX(arr + 1);
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
	removeX(arr);
	cout<<arr;
	return 0;
}