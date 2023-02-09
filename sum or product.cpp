#include<iostream>
using namespace std;

int main()
{
	int choice;
	cin>>choice;
	int sum=0,pro=1;
	if(choice==1)
	{
		int n;
		cout<<"Enter The Number : ";
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			sum = sum + i;
		}
		cout<<endl<<"Sum Is : "<<sum;
		return 0;  
	}
	else if(choice==2)
	{
		int n;
		cout<<"Enter The Number : ";
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			pro = pro * i;
		}
		cout<<endl<<"Product Is : "<<pro;
		return 0; 
	}
	else
	{
		cout<<"-1";
	}
	return 0;
}