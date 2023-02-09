#include<iostream>
using namespace std;

void reach_home(int src, int dest)
{
	cout<<"Source Is : "<<src<<" Destination Is : "<<dest<<endl;
	if(src==dest)
	{
		cout<<"Pahuch Gya";
		return ;
	}
	src++;
	reach_home(src,dest);
}
int main()
{
	int dest=10;
	int src=1;
	cout<<endl;
	reach_home(src, dest);
	return 0;
}