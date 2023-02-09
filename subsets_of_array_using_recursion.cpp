#include<bits/stdc++.h>
using namespace std;

int sub_set(int num, int output[])
{
	if(str.empty())
	{
		output[0] = "";
		return 1;
	}
	
	int smallnum = num+1;
	int smalloutputsize =  sub_set(smallnum, output);
	for(int i=0; i<smalloutputsize; i++)
	{
		output[i + smalloutputsize] = num + output[i];
	}
	return 2 * smalloutputsize;
}
int main()
{
	int num;
	cin>>num;
	int *output = new int[1000];
	int count = sub_set(num, output);
	for(int i=0; i<count; i++)
	{
		cout<<output[i]<<endl;
	}
	return 0;
}