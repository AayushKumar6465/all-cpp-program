/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m,n;
	cin>>m>>n;
	int **p = new int *[m];
	for(int i=0; i<m; i++)
	{
		p[i] = new int [i+1];
		for(int j=0; j<n; j++)
		{
			cin>>p[i][j];
		}
	}
	
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout<<p[i][j]<<" ";
		}
		cout<<endl;
	}
	
	for(int i=0; i<m; i++)
	{
		delete [] p[i];
	}
	delete [] p;
	return 0;
}*/
#include <iostream>
using namespace std;

#define SQUARE(x) x*x

int main()
{
    int x = 36 / SQUARE(6);
    cout << x;

    return 0;
}