
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int sum=0;
	int i=2,n;
	cin>>n;
	for(int i=1;i<=n;i=i+1)
	{
		if(i%2!=0)
		{
			sum = sum +i;		
		}
		cout<<sum<<endl;
	}
	return 0;
}