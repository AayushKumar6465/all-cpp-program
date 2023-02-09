#include<bits/stdc++.h>
using namespace std;

int print(int n)
{
	if(n==0)	//Base Case
	{
		return 1;
	}
	print(n-1);
	cout<<n<<" ";
}
int main()
{
	int n;
	cin>>n;
	
	//int ans = power(n);
	//cout<<endl;
	print(n);
	return 0;
}