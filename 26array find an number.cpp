#include<iostream>
using namespace std;

int main()
{
	int a[3][3],i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"The 2D array Is : "<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<a[i][j]<<"  ";
		}
		cout<<endl;
	}
	int k;
	cout<<"Enter The Number You Want To Search : ";
	cin>>k;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]==k)
			{
				cout<<"Your Number "<<a[i][j]<<" Found At This Position "<<a[i][j]<<endl;
				return 0;
			}
		}
	}
	cout<<"Invalid Number Doesn't Found"<<endl;
	return 0;
}