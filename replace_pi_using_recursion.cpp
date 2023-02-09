#include<bits/stdc++.h>
using namespace std;

void replace_pi(char arr[])
{
	int len = strlen(arr);
	if(arr[0] == 'p' && arr[1] == 'i')
	{
		for(int i = len; i > 1; i--)
		{
			arr[i+2] = arr[i];	
		}	
		arr[0] = '3';
		arr[1] = '.';
		arr[2] = '1';
		arr[3] = '4';
		replace_pi(arr + 4);
	} 
	else if(arr[1] != '\0')
	{
		replace_pi(arr + 1); 
	}
	else 
	{
		return;
	}
}
int main()
{
	char arr[50];
	cin.getline(arr, 50);
	replace_pi(arr);
	cout<<arr;
	return 0;
}