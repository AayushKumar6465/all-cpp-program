#include<bits/stdc++.h>
using namespace std;

bool permutation(char str1[], char str2[])
{
	int freq[256] = {0};
	for(int i = 0; i < str1[i] != '\0'; i++)
	{
		int index = str1[i];
		freq[index]++;
	}
	for(int i = 0; i < str2[i] != '\0'; i++)
	{
		int index = str2[i];
		freq[index]--;
	}
	for(int i=0; i<256; i++)
	{
		if(freq[i] != 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	char str1[7] = {'a','c','d','e','a'};
	char str2[7] = {'c','e','a','d','a'};
	int ans = permutation(str1,str2);
	(ans == 1)? cout<<"true" : cout<<"false";
	return 0;
}
