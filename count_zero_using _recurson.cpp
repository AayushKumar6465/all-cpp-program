#include<bits/stdc++.h>
using namespace std;

int count_zero(int n)
{
	if(n%10 == 0 && n/10 != 0)
	{
		return 1 + count_zero(n/10);	
	}
	else if(n/10 != 0)
	{
		return count_zero(n/10);
	}
	else if (n%10 == 0 && n/10 == 0)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
int main()
{
	int n;
	cin>>n;
	cout<<count_zero(n);
	return 0;
}
