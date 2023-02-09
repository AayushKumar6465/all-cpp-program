#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cout<<"Enter The binary Number : ";
	cin>>n;
	int rem=0,ans=0;
	int pv=1;
	while(n>0)
	{
		rem = n % 10;
		ans = ans + rem * pv;
		pv = pv * 2;
		n = n / 10;
	}
	cout<<ans<<endl;
	return 0;
}