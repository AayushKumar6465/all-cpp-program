
/*#include<iostream>
using namespace std;

int main()
{
	int a[5],i;
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	int freq=0,f;
	cout<<"Enter The Number to Check Freq : ";
	cin>>f;
	for(i=0;i<5;i++)
	{
		if(a[i]==f)
		{
			freq++;
		}
	}
	cout<<freq<<endl;
	return 0;
} */
#include<iostream>
using namespace std;

int main()
{
	int a[10],i;
	for(i=0;i<10;i++)
	{
		cin>>a[i];
	}
	int freq=0,f;
	cout<<"enter The Number To find : ";
	cin>>f;
	for(i=0;i<10;i++)
	{
		if(a[i]==f)
		{
			freq++;
		}
	}
	cout<<freq;
	return 0;
}