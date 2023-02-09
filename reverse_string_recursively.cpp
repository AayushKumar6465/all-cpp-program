#include<bits/stdc++.h>
using namespace std;

void reverse_string(string &str, int s, int e)
{
	if(s > e)
	{
		return ;
	}
	
	swap(str[s], str[e]);
	s++; e--;
	
	return reverse_string(str, s, e);
}
int main()
{
	string str;
	cin>>str;
	reverse_string(str, 0, str.length()-1);
	cout<<str<< " ";
	return 0;
}