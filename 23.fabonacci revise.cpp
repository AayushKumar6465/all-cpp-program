#include<iostream>
using namespace std;
int main()
{
	int n,n1,n2,n3;
	cin>>n;
	n1=0;
	n2=1;
	for(int i=0;i<=n;i++)
	{
		if(n1<=n)
		{
			cout<<n1<<" ";
			n3 = n1 + n2;
			n1 = n2;
			n2 = n3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}