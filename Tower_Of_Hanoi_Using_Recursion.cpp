#include<bits/stdc++.h>
using namespace std;

void TOH(int n, char src, char aux, char dest)
{
	if(n == 1)
	{
		cout<<"Move Disk : "<<n<<" From "<<src<<" To "<<dest<<endl;
		return;
	}
	
	TOH(n-1, src, dest, aux);
	cout<<"Move Disk : "<<n<<" From "<<src<<" TO "<<dest<<endl;
	TOH(n-1, aux, src, dest);
}
int main()
{
	int n; 
	cin>>n;
	TOH(n, 'A', 'B', 'C');
	return 0;
}