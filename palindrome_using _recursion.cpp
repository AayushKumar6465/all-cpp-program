#include<bits/stdc++.h>
using namespace std;

bool is_palindrome(string s, int start, int end)
{
	if(start >= end)
	{
		return true;
	}
	
	if(s[start] != s[end])
	{
		return false;
	}
	
	return is_palindrome(s, start+1, end-1);
}
int main()
{
	string s;
	cin>>s;
	
	if( is_palindrome(s, 0, s.length()-1) )
	{
		cout<<"true";
	}
	else
	{
		cout<<"false";
	}
	return 0;
}