#include<stdio.h>

int main()
{
	int arr[10], size, pos, element, i;
	
	printf("Enter The Size Of An Array : ");
	scanf("%d", &size);
	
	printf("Enter The Elements Of An Array :\n");
	for(i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	printf("\nEnter The Element TO Insert : ");
	scanf("%d", &element);

	arr[size] = element;
	for(i = 0; i <= size; i++)
	{
		printf("%d  ", arr[i]);
	}
	return 0;
}