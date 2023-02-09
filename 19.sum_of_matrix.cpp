#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,j,a[3][3],b[3][3],c[3][3];
	cout<<"Enter 9 Numbers For Matrix_1 : "<<endl;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"Enter 9 Numbers For Matrix_2 : "<<endl;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			cin>>b[i][j];
		}
	}
	cout<<"The Sum Of Two Matrix Is : "<<endl;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			c[i][j] = a[i][j] + b[i][j];
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}