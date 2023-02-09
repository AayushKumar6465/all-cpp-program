#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int i=1;
	while(i<=n)
	{
		int j=1; 
		while(j<=i)
		{
			cout<<i<<" ";
			j++;
		}
		cout<<endl;
		i++;
	}
	return 0;
}
/*
if we get print the j then output is
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

if we get print the i then output is
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/

 