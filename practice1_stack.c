#include<stdio.h>

int arr[10];
int choice, size, top=-1, i, value;

void push()
{
	if(size-top > 1)
	{
		printf("Enter the value to be pushed : ");
		scanf("%d", &value);
		top++;	
		arr[top] = value;
	}	
	else
		printf("\nStack Overflow");
}

void pop()
{
	if(top >= 0)
	{
		printf("\nThe poped element is : %d", arr[top]);
		top--;
	}
	else
		printf("\nStack Underflow");
}

void display()
{
	if(top >= 0)
	{
		printf("\nThe Satck Elements Are : ");
		
		for(i=0; i<=top; i++)
			printf("%d ", arr[i]);
	}
	else
		printf("\nStack Is Empty");
}

void peek()
{
	if(top >= 0)
		printf("The Top Element Is : %d", arr[top]);
	else
		printf("\nStack Is Empty");
}

int main()
{
	printf("Enter The Size Of The Array [MAX = 10)] Is : ");
	scanf("%d", &size);
	printf("1.PUSH\n2.POP\n3.DISPLAY\n4.PEEK\n5.EXIT");
	do
	{
		printf("\nEnter The Choice : ");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1: push(); break;
			case 2: pop(); break;
			case 3: display(); break;
			case 4: peek(); break;
			case 5: printf("\nEXIT"); break;
			default: printf("Invalid Choice");
		}
	}while(choice != 5);
	return 0;
}