#include<bits/stdc++.h>
using namespace std;

int sub_string(string str, string output[])
{
	if(str.empty())
	{
		output[0] = "";
		return 1;
	}
	
	string smallstring = str.substr(1);
	int smalloutputsize =  sub_string(smallstring, output);
	for(int i=0; i<smalloutputsize; i++)
	{
		output[i + smalloutputsize] = str[0] + output[i];
	}
	return 2 * smalloutputsize;
}
int main()
{
	string str;
	cin>>str;
	string *output = new string[1000];
	int count = sub_string(str, output);
	for(int i=0; i<count; i++)
	{
		cout<<output[i]<<endl;
	}
	return 0;
}