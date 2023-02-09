#include<bits/stdc++.h>
using namespace std;

bool balanced_parenthesis( string str)
{
	stack<char> s;
	for(int i=0; i<str.length(); i++)
	{
		if(s.empty())
		{
			s.push(str[i]);
		}
		else if( (s.top() == '(' && str[i] == ')') || (s.top() == '{' && str[i] == '}') || (s.top() == '[' && str[i] == ']') )
		{
			s.pop();
		}
		else
		{
			s.push(str[i]);
		}
	}
	
	if(s.empty())
		return true;
	else
		return false;
}
int main()
{
	string str;	cin>>str;
	
	if(balanced_parenthesis(str))
		printf("Balanced");
	else
		printf("Unbalanced");
	return 0;
}