//Smallest And Largest Element In 1d Array
#include<stdio.h>

int main()
{
	int a[50], i, n, large, small;
	
	printf("Enter The Number Of Elements : ");
	scanf("%d",&n);
	
	printf("Input The Array Elements : \n");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);	
	}

	large=small=a[0];

	for(i=1; i<n; i++)
	{
		if(a[i]>large)
		{
			large=a[i];	
		}

		if(a[i]<small)
		{
			small=a[i];	
		}
	}

	printf("\nThe Smallest Element Is %d", small);
	printf("\nThe Largest Element Is %d", large);

return 0;
}