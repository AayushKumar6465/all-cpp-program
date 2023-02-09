#include<bits/stdc++.h> 
using namespace std;
#define ASCII_SIZE 256 
// input - given string
char highestOccurringChar(char str[]) 
{
    char result;
  	int i, len;
  	int max = -1;
  	
  	int freq[ASCII_SIZE] = {0}; 
 	len = strlen(str);
  	
	for(i = 0; i < len; i++)
  	{
  		freq[str[i]]++;
	}
  		
  	for(i = 0; i < len; i++)
  	{
		if(max < freq[str[i]])
		{
			max = freq[str[i]];
			result = str[i];
		}
	}
  	return result;
}
int main()
{
	char str[] = {'a','b','b','b','c','a','a','d','d','b','e'};
	highestOccurringChar(str);
	int n = sizeof(str)/sizeof(str[0]);
	for(int i=0; i<n; i++)
	{
		cout<<str[i]<<" ";
	}
}