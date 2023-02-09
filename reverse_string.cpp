#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str = "WELCOME";
	
	//std::
	string::iterator i;
	//std::
	string::reverse_iterator j;
	
	cout<<"forward direction of iterator : ";
	for(i = str.begin(); i != str.end(); i++)
	{
		cout<<*i;
	}
	
	cout<<endl<<"reverse direction of iterator : ";
	for(j = str.rbegin(); j != str.rend(); j++)
	{
		cout<<*j;
	}
	return 0;
}