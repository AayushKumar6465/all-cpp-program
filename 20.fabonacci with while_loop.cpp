#include<iostream>
using namespace std;

int main()
{
	int n,x,y,z;
	cout<<"Enter An Number : ";
	cin>>n;
	x = 0;
	y = 1;
	z = 0;
	while(z<=n)
	{
		cout<<z<<" ";
		x = y;
		y = z;
		z = x + y;
	}
	return 0;
}