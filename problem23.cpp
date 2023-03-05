#include<stdio.h>

int ar[10];
int n = 10;

int front = - 1;
int rear = - 1;

void enqueue(int item) 
{
    if (rear == n - 1)
	{
        printf(" Overflow ");
        return;
    }
    else 
	{
        if (front == - 1 && rear==-1)
		{
            front = 0;
            rear=0;
        }
        else
		{
            rear++;
        }
        ar[rear] = item;
        printf(" Element Inserted ");
    }
}
void dequeue() 
{
	int item;
    if (front == - 1 || front > rear) 
	{
        printf(" Underflow ");
        return ;
    }
    else 
	{
        item = ar[front];
        printf("Element deleted from queue is : ", item);
        if(front == rear)  
		{  
            front = -1;  
            rear = -1;  
        }
        else
		{
            front++;
        }
   }
}
void display() 
{
    if (front == - 1)
	{
        printf(" Queue Is Empty ");
        return;
    }
    else 
	{
        printf("Elements are : ");
        for (int i = front; i <= rear; i++)
            printf("%d  ", ar[i]);
        printf("\n");
    }
}
int main() 
{
    int ch, item;
    printf("1: Inserting element to queue(enqueue)\n2: Deleting element from queue(dequeue)\n3: Display all the elements of queue\n4: Exit\n");
    do 
	{ 
        printf("\nEnter your choice : ");
        scanf("%d", &ch);
        switch(ch) 
		{
            case 1: 
			{
                printf("Enter Element To Be Inserted : ");
                scanf("%d", &item);
                enqueue(item);
                break;
            }
            case 2: dequeue();
                break;
            case 3: display();
                break;
            case 4: printf("\nExit\n");
                break;
            default: printf(" Invalid choice ");
        }
    }while(ch != 4);
    return 0;
}