#include<stdio.h>

int main()
{
	int a[50], i, n, large;
	
	printf("Enter The Number Of Elements : ");
	scanf("%d",&n);
	
	printf("Input The Array Elements : \n");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);	
	}

	large = a[0];

	for(i=1; i<n; i++)
	{
		if(a[i]>large)
		{
			large=a[i];	
		}

	}
	printf("\nThe Largest Element Is %d", large);
	return 0;
}