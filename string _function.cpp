#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cout<<"Enter The Value Of N : ";
	cin>>n;
	char str[n];
	for(int i=0;i<n;i++)
	{
		cin>>str[n];
	}
	int flag=0;
	for(int i=0;i<n-1;i++)
	{
		char ch = str[i];
		for(int j=i+1;j<n-1;j++)
		{
			flag=1;
			break;
		}
		if(flag != 1)
		{
			cout<<"The Non Repeating Character Is : "<<ch<<endl;
		}
	}
	return 0;
}
