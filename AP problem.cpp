#include<bits/stdc++.h>
using namespace std;

/*int main()
{
	int m;
	cin>>m;
	//int count=0;
	int N=1;
	while(N<=m)
	{
		if((3*N + 2)%4 == 0)
		{
			//count++;
			cout<<"No"<<" ";
		}
		else
		{
			cout<<"Yes"<<" ";
		}
		N++;
	}
	return 0;
}*/
/*int main()
{
	int n;
	cin>>n;
	int rev=0;
	int rem=0;
	while(n>0)
	{
		rem = n%10;
		rev = rev * 10 + rem;
		n = n/10;
	}
	cout<<rev<<endl;
	return 0;
}*/
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