#include<iostream>
using namespace std;

int main()
{
	int a[10],sum=0,i;
	cout<<"Enter 10 Numbers : ";
	for(i=0;i<=9;i++)
	{
		cin>>a[i]>>endl;	
	}	
	
	for(i=0;i<=9;i++)
	{
		sum = sum + a[i];
	}
	float avg;
	avg = sum/10.0;
	cout<<avg;
	return 0;
}