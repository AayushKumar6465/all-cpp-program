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

	printf("At What Position : ");
	scanf("%d", &pos);
	
	for(i = size-1; i >= pos; i--)
	{
		arr[i+1] = arr[i];
	}
	arr[pos] = element;
	
	for(i = 0; i <= size; i++)
	{
		printf("%d  ", arr[i]);
	}
	return 0;
}