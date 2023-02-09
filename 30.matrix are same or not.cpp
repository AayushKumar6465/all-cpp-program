#include<iostream>
using namespace std;

int main()
{
	int a[3][3],b[3][3],i,j;
	cout<<"Enter the value Of First Matrix : "<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"Enter The Value Of Second Matrix : "<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>b[i][j];
		}
	}
	cout<<"The First Matrix Is : "<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<a[i][j]<<"  ";
		}
		cout<<endl;
	}
	cout<<"The Second Matrix Is : "<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<b[i][j]<<"  ";
		}
		cout<<endl;
	}
	int flag=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]==b[i][j])
			flag = 1;
		}
	}
	if(flag==1)
	{
		cout<<"\nBoth Matrix Are Same";
	}
	else
	{
		cout<<"\nBoth Matrix Are Not Same";
	}
	return 0;
}