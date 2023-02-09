#include<bits/stdc++.h>
using namespace std;

string replace_character(string str, char c1, char c2)
{
	int l = str.length();
	
	for(int i=0; i<l;)
	{
		if(str[i] == c1)
		{
			str[i] = c2;
			i++;
		}
		else 
		{
			i++;
		}
	}
	return str;
}
int main()
{
	string str = "wtlcomt";
	char c1 = 't', c2 = 'e';
	cout<<replace_character(str, c1, c2);
	return 0;
}