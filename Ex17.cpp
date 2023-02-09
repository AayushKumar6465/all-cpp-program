#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str = "aayush kumar";
	
	std::string:: iterator i;
	std::string:: reverse_iterator j;
	
	cout<<"Forward Direction Of Iteration : ";
	for(i = str.begin(); i != str.end(); i++)
	{
		cout<<*i;
	}
	
	cout<<endl<<"Reverse Direction Of Iteration : ";
	for(j = str.rbegin(); j != str.rend(); j++)
	{
		cout<<*j;
	}
	return 0;
}