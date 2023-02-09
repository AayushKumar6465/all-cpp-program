#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str = "AAYUSH KUMAR";
	
	string::iterator i;
	string::reverse_iterator j;
	
	cout<<"Forward Direction Iteration :) ";
	for(i = str.begin();i != str.end();i++)
	{
		cout<<*i;
	}
	cout<<"\nReverse Direction Iteration :) ";
	for(j = str.rbegin();j != str.rend();j++)
	{
		cout<<*j;
	}
	return 0;
}