#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int i = n;
	while(i>=1)
	{
		int j=1;
		while(j<=n)
		{
			if(j<=i)
				cout<<j;
			else
				cout<<"*";
			j++;
		}
		int k=n;
		while(k>=1)
		{
			if(k<=i)
				cout<<k;
			else
				cout<<"*";
			k--;
		}
		i--;
		cout<<endl;
	}
	return 0;
}

