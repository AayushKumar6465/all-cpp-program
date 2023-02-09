#include<iostream>
using namespace std;

int main()
{
	int a[5],i,j,t;
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<4;i++)
	{
		for(j=i+1;i<5;j++)
		{
			t = a[i];
			a[i] = a[j];
			a[j] = t;
		}
	}
	cout<<"after acending order : "<<endl;
	for(i=0;i<5;i++)
	{
		cout<<a[i]<<"  ";
	}
	return 0;
}