#include<bits/stdc++.h>
using namespace std;

void remove_consecutive_duplicates(char str[])
{
	int nextindex = 1;
	char lastchar = str[0];
	for(int i=0; str[i] != '\0';)
	{
		if(str[i] == lastchar)
		{
			i++;
		}	
		else
		{
			str[nextindex] = str[i];
			nextindex++;
			lastchar = str[i];
			i++;
		}
	} 
	str[nextindex] = '\0';
}
int main()
{
	char str[20] = {'a','c','d','e','a','a','a','b','b'};
	int size = sizeof(str)/sizeof(str[0]);
	remove_consecutive_duplicates(str);
	for(int i=0;i<size;i++)
	{
		cout<<str[i]<<" ";
	}
	return 0;
}