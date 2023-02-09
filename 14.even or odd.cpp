#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int count1=0,count2=0;
	for(int i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			cout<<"Even : "<<i<<" ";
			count1++;
		}
		else
		{
			cout<<"Odd : "<<i<<" ";
			count2++;
		}
	}
	cout<<endl;
	cout<<count1<<" "<<count2<<endl;
	return 0;
}