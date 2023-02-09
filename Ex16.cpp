#include<bits/stdc++.h>
using namespace std;

void remove_consecutive_duplicates(char str[])
{
	int next_index = 1;
	int last_char = str[0];
	for(int i=0; str[i] != '\0';)
	{
		if(str[i] == last_char)
		{
			i++;
		}
		else
		{
			str[next_index] = str[i];
			next_index++;
			last_char = str[i];
			i++;
		}
	}
	str[next_index] = '\0';
}
int main()
{
	char str[15];
	cin>>str;
	remove_consecutive_duplicates(str);
	for(int i=0; i < str[i] != '\0'; i++)
	{
		cout<<str[i];
	}
	return 0;
}