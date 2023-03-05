//Write A Program To Implement Queue Using Array 
#include<stdio.h>   
//#include<stdlib.h>  
#define maxsize 5  

int front = -1, rear = -1;  
int queue[maxsize];

void queuefront()
{
    if(front == rear) 
	{
        printf("\nQueue is Empty");
        return;
    }
	printf("\nFront Element is : %d", queue[front]);
    return;
}
void enqueue()  
{  
    int item;  
    printf("Enter The Element : ");  
    scanf("%d", &item);      
    if(rear == maxsize-1)  
    {  
        printf("\nOVERFLOW\n");  
        return;  
    }  
    if(front == -1 && rear == -1)  
    {  
        front = rear = 0;   
    }  
    else   
    {  
        rear = rear+1;  
    }  
    queue[rear] = item;       
}  
void dequeue()  
{  
    int item;   
    if (front == -1 || front > rear)  
    {  
        printf("\nUNDERFLOW\n");  
        return;  
              
    }  
    else  
    {  
        item = queue[front];  
        if(front == rear)  
        {  
            front = -1;  
            rear = -1 ;  
        }  
        else   
        {  
            front = front + 1;  
        }  
        printf("\nValue Deleted ");  
    }  
}  
void display()  
{  
    int i;  
    if(rear == -1)  
    {  
        printf("\nEmpty Queue\n");  
    }  
    else  
    {   printf("Printing Values\n");  
        for(i=front; i<=rear; i++)  
        {  
            printf("%d ",queue[i]);  
        }     
    }  
}    
int main()  
{  
    int choice;   
    printf("1.Enqueue\n2.Dequeue\n3.Display The Queue\n4.Queuefront\n5.Exit\n");
    do   
    {       
        printf("\nEnter Your Choice : ");  
        scanf("%d", &choice);  
        switch(choice)  
        {  
            case 1: enqueue();  
            		break;  
            case 2: dequeue();  
            		break;  
            case 3: display();  
            		break; 
			case 4: queuefront();
					break; 
            case 5: printf("\nEXIT");
                	break;
            default: printf("\nEnter The Valid Choice");  
        }  
    }while(choice != 5);
	return 0;  
}    