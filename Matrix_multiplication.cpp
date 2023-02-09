#include<stdio.h>    
  
int main()
{  
	int a[10][10], b[10][10], i, j, k;
	int mul[10][10], r, c;    
	  
	printf("Enter The Number Of Row = ");    
	scanf("%d", &r);    
	
	printf("Enter The Number Of Column = ");    
	scanf("%d", &c);
	    
	printf("Enter The First Matrix Element = \n");    
	for(i=0; i<r; i++)    
	{    
		for(j=0; j<c; j++)    
		{    
			scanf("%d", &a[i][j]);    
		}    
	}    
	printf("Enter The Second Matrix Element = \n");    
	for(i=0; i<r; i++)    
	 {    
		for(j=0; j<c; j++)    
		{    
			scanf("%d", &b[i][j]);    
		}    
	}    
    
	printf("Multiply Of The Matrix = \n");    
	for(i=0; i<r; i++)    
	{    
		for(j=0; j<c; j++)    
		{    
			mul[i][j]=0;    
			for(k=0; k<c; k++)    
			{    
				mul[i][j] += a[i][k] * b[k][j];    
			}    
		}	    
	}    
	//for printing result    
	for(i=0; i<r; i++)    
	{    
		for(j=0; j<c; j++)    
		{    
			printf("%d\t", mul[i][j]);    
		}    
		printf("\n");    
	}    
	return 0;  
}  