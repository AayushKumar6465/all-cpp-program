#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int i=1;
	int v=1;
	while(i<=n)
	{
		int j=1; 
		while(j<=i)
		{
			cout<<v<<" ";
			j++;
			v++;
		}
		cout<<endl;
		i++;
	}
	return 0;
}
/* 
Output
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/
 