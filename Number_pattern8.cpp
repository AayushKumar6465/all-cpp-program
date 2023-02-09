#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int i=1;
	while(i<=n)
	{
		//For Space 
		int s=1;
		while(s<=n-i)
		{
			cout<<" ";
			s++;
		}
		//For Increasing Numbers
		int temp=i;
		int j=1;
		while(j<=i)
		{
			cout<<temp++;
			j++;
		}
		//For Decreasing Numbers
		temp--; 
		int k=1;
		while(k<i)
		{
			cout<<--temp;
			k++;
		}
		cout<<endl;
		i++;
	}
	return 0;
}
