#include<stdio.h>

int main()
{
	int size1, size2 , i, j, a[10][10], b[10][10];
    int add[10][10], sub[10][10];
    
    printf("Enter The value Of Size1 : ");
    scanf("%d",&size1);
    
    printf("Enter The value Of Size2 : ");
    scanf("%d",&size2);
    
    printf("Enter The Elements Of Array 1 : \n");  //Taking The Elements Of Array 1 
    for(i=0; i<size1; i++)
    {
    	for(j=0; j<size2; j++)
    	{
    		scanf("%d", &a[i][j]);
		}
	}
	
	printf("Enter The Elements Of Array 2 : \n");   //Taking The Elements Of Array 2
    for(i=0; i<size1; i++)
    {
    	for(j=0; j<size2; j++)
    	{
    		scanf("%d", &b[i][j]);
		}
	}
	
	for(i=0; i<size1; i++)  //Matrix Add And Sub
	{
		for(j=0; j<size2; j++)
		{
			add[i][j] = a[i][j] + b[i][j];
			sub[i][j] = a[i][j] - b[i][j];
		}
	}
	
	printf("The Matrix Sum Is : \n");  //Print Matrix Add
	for(i=0; i<size1; i++)
	{
		for(j=0; j<size2; j++)
		{
			printf("%d ", add[i][j]);
		}
		printf("\n");
	}
	printf("\nThe Matrix Sub Is : \n");  //Print Matrix Sub
	for(i=0; i<size1; i++)
	{
		for(j=0; j<size2; j++)
		{
			printf("%d ", sub[i][j]);
		}
		printf("\n");
	}
	return 0;
}