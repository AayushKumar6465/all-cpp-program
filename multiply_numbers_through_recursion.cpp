#include<bits/stdc++.h>
using namespace std;

int multiply(int x, int y)
{
	if(x == 0 || y == 0)
	{
		return 0;
	}
	if(x == 1)
	{
		return y;
	}
	if(y == 1)
	{
		return x;
	}
	return x + multiply(x , y - 1);
}
int main()
{
	int x = 5, y = 3;
	cout<<multiply(x, y);
	return 0;
}