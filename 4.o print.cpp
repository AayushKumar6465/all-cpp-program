#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int c1=0,c2=0;
	for(int i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			cout<<"E"<<" ";
			c1++;
		}
		else
		{
			cout<<"O"<<" ";
			c2++;
		}
	}
	cout<<endl<<c1<<" "<<c2;
	return 0;
}