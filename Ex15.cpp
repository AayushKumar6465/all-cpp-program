#include<bits/stdc++.h>
using namespace std;

bool permutation(char str1[], char str2[])
{
	int freq[256] = {0};
	for(int i=0; i < str1[i] != '\0'; i++)
	{
		int index = str1[i];
		freq[index]++;
	}
	for(int i=0; i<str2[i] != '\0'; i++)
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
	char str1[10]; //= "abcd";
	char str2[10]; //= "bdca";
	cin>>str1;
	cout<<endl;
	cin>>str2;
	int ans = permutation(str1, str2);
	(ans == 1) ? (cout<<"True") : (cout<<"False");
	return 0;
}