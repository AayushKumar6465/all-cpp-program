#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	if(n>0)
	{
		cout<<"The Number Is Positive"<<endl;
	}
	else if(n<0)
	{
		cout<<"The Number Is Negative"<<endl;
	}
	else
	{
		cout<<"The Number Is Equals To Zero"<<endl;
	}
	return 0;
}