#include<stdio.h>

int stack[10];
int choice, size, top = -1, value, i, ans;

void push()
{
	if(size-top > 1)
	{
		printf("Enter a value to be pushed : ");
		scanf("%d",&value);
		top++;
		stack[top] = value;
	}
	else
	{
		printf("\nSTACK is OverFlow");
	}
}

void pop()
{
    if(top >= 0)
    {
       printf("\nThe popped elements is %d", stack[top]);
       top--;
    }
    else
    {
        printf("\nStack is UnderFlow");
    }
}

void display()
{
    if(top >= 0)
    {
        printf("\n The elements in STACK \n");
        
		for(i = top; i >= 0; i--)
            printf("\n%d", stack[i]);
    }
    else
    {
        printf("\nThe STACK is empty");
    }  
}

int peek()
{
	if(top >= 0)
	{
		return stack[top];
	}
	else
	{
		printf("\nStack Is Empty\n");
		return -1;
	}
}
int main()
{
    printf("Enter the size of STACK[MAX=100] : ");
    scanf("%d",&size);
    printf("\nSTACK OPERATIONS USING ARRAY");
    printf("\n1.PUSH \n2.POP \n3.DISPLAY \n4.PEEK \n5.EXIT");
    do
    {
        printf("\nEnter the Choice:");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            { 
                printf("The TOP Element IS : %d", peek());
                break;
            }
            case 5:
            {
            	printf("\nEXIT");
                break;
			}
            default:
            {
                printf ("\nPlease Enter a Valid Choice(1/2/3/4)");
            }               
        }
    }
    while(choice != 5);
    return 0;
}   