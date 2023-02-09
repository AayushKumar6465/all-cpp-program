//#include<bits/stdc++.h>
//using namespace std;
//
//#define Maxsize 7
//
//int queue[Maxsize];
//int front=-1, rear=-1;
//
//void enqueue()
//{
//	int value;  
//    printf("\nEnter the Value\n");  
//    scanf("\n%d", &value);      
//    if(rear == Maxsize-1)  
//    {  
//        printf("\Queue Is Full\n");  
//    }  
//    if(front == -1 && rear == -1)  
//    {  
//        front = 0;  
//        rear = 0;  
//    }  
//    else   
//    {  
//        rear++;  
//    }  
//    queue[rear] = value;  
//    printf("\nValue Inserted ");
//}
//
//void dequeue()
//{
//	int value;   
//    if (front == -1 || front > rear)  
//    {  
//        printf("\Queue Is Empty\n");    
//    }  
//    else  
//    {  
//        value = queue[front];  
//        if(front == rear)  
//        {  
//            front = -1;  
//            rear = -1 ;  
//        }  
//        else   
//        {  
//            front++;  
//        }  
//        printf("\nValue Deleted ");  
//    } 
//}
//
//void display()  
//{  
//    int i;  
//    if(rear == -1)  
//    {  
//        printf("\Queue Is Empty\n");  
//    }  
//    else  
//    {    
//        for(i=front; i<=rear; i++)  
//        {  
//            printf("\n%d\n",queue[i]);  
//        }     
//    }  
//}
//int main()
//{
//	int choice;
//	while(choice != 4)
//	{
//		printf("\n1.Insert an Element \n2.Delete an Element \n3.Display the Queue \n4.Exit\n");  
//        printf("\nEnter Your Choice Is : ");  
//        scanf("%d", &choice);
//		switch(choice)
//		{
//			case 1: enqueue();
//				    break;
//			case 2: dequeue();
//				    break;
//			case 3: display();
//				    break;
//			case 4: exit(0);
//				    break;
//			default : printf("\nEnter Valid Choice");	
//		}  
//	}
//	return 0;
//}
#include<stdio.h>   
#include<stdlib.h>  
#define maxsize 5  
//void insert();  
//void delete();  
//void display();
int front = -1, rear = -1;  
int queue[maxsize];
void insert()  
{  
    int item;  
    printf("\nEnter the element\n");  
    scanf("\n%d",&item);      
    if(rear == maxsize-1)  
    {  
        printf("\nOVERFLOW\n");  
        return;  
    }  
    if(front == -1 && rear == -1)  
    {  
        front = 0;  
        rear = 0;  
    }  
    else   
    {  
        rear = rear+1;  
    }  
    queue[rear] = item;  
    printf("\nValue inserted ");  
      
}  
void delete()  
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
        printf("\nvalue deleted ");  
    }  
      
      
}  
      
void display()  
{  
    int i;  
    if(rear == -1)  
    {  
        printf("\nEmpty queue\n");  
    }  
    else  
    {   printf("\nprinting values .....\n");  
        for(i=front;i<=rear;i++)  
        {  
            printf("\n%d\n",queue[i]);  
        }     
    }  
}    
void main ()  
{  
    int choice;   
    while(choice != 4)   
    {       
        printf("\n1.insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n");  
        printf("\nEnter your choice ?");  
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            insert();  
            break;  
            case 2:  
            delete();  
            break;  
            case 3:  
            display();  
            break;  
            case 4:  
            exit(0);  
            break;  
            default:   
            printf("\nEnter valid choice??\n");  
        }  
    }  
}    