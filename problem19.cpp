#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n1, n2, a[n1][n2], b[n1][n2], c[n1][n2], i, j;
	scanf("%d %d", &n1, &n2); 
	
	printf("\nEnter The Elements Of Array 1 Is : \n");
	for(int i=0; i<n1; i++)
	{
		for(int j=0; j<n2; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("\nEnter The Elements Of Array 2 Is : \n");
	for(i=0; i<n1; i++)
	{
		for(int j=0; j<n2; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}

	for(i=0; i<n1; i++)
	{
		for(int j=0; j<n2; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}

	printf("\nThe Matrix Addition Is : \n");
	for(i=0; i<n1; i++)
	{
		for(int j=0; j<n2; j++)
		{
			printf("%d\t", c[i][j]);
		}
		printf("\n");
	}
	return 0;
}