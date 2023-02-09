#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	bool is_prime = true;
	
	if(n==0||n==1)
	{
		is_prime = false;
	}
	
	for(int i=2;i<=n/2;i++)
	{
		if(i%n==0)
		{
			is_prime = false;
			break;
		}
	}
	if (is_prime)
     cout << n << " is a prime number";
    else
     cout << n << " is not a prime number";
     return 0;
}