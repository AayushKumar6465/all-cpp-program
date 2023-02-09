#include<bits/stdc++.h>
using namespace std;

double geometric_sum(int k)
{
	if(k == 0)
	{
		return 1;
	}
	return 1 / pow(2, k) + geometric_sum(k - 1);
}
int main()
{
	int n;
	cin>>n;
	cout<<geometric_sum(n);
	return 0;
}