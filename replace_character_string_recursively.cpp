#include<bits/stdc++.h>
using namespace std;

void replace_character(char *str, char c1, char c2)
{
	if(str[0] == c1)
	{
		str[0] = c2;
		if(str[1] != '\0')
		{
			return replace_character(str + 1, c1, c2);
		}
		else
		{
			return;
		}
	}
	else if(str[1] != '\0')
	{
		return replace_character(str + 1, c1, c2);
	}
	else 
	{
		return;
	}
}
int main()
{
	char str[20];
	cin.getline(str, 20);
	cout<<"Enter the Characters To replace : \n";
	char c1, c2; cin>>c1>>c2;
	replace_character(str, c1, c2);
	cout<<str;
	return 0;
}