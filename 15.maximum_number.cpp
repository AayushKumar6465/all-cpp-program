#include<bits/stdc++.h>
using namespace std;

int main()
{
	int max =0;
	int n;
	cout<<"Enter A Number : ";
	cin>>n;
	while(n!=0)
	{
		if(max<n)
		{
			max = n;
		}
		cout<<"Enter A Number : ";
		cin>>n; 
	}
	cout<<"The Maximum Number Is : "<<max;
	return 0;
}
