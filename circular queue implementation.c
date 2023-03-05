#include <stdio.h>
#define SIZE 5

int items[SIZE];
int front = -1, rear = -1;

// Check if the queue is full
int is_full() 
{
  if((front == rear + 1) || (front == 0 && rear == SIZE - 1)) 
  	return 1;
  return 0;
}

// Check if the queue is empty
int is_empty() 
{
  if (front == -1) 
  	return 1;
  return 0;
}

// Adding an element
void enqueue() 
{
  int element;  
  printf("Enter The Element : ");  
  scanf("%d", &element);      
  if (is_full())
    printf("Queue Is Full\n");
  else 
  {
    if(front == -1) 
	{
		front = 0;	
	}
    rear = (rear + 1) % SIZE;
    items[rear] = element;
    printf("Inserted -> %d", element);
  }
}

// Removing an element
int dequeue() 
{
  int element;
  if(is_empty()) 
  {
    printf("Queue Is Empty\n");
    return (-1);
  } 
  else 
  {
    element = items[front];
    if(front == rear) 
	{
      front = rear = -1;	// Q has only single element, so i reset the queue after dequeing it
    } 
    else 
	{
      front = (front + 1) % SIZE;
    }
    printf("Deleted Element -> %d \n", element);
    return element;
  }
}

// Display the queue
void display() 
{
  int i;
  if (is_empty())
    printf("Empty Queue\n");
  else 
  {
    printf("\nFront -> %d ", front);
    printf("\nItems -> ");
    for (i = front; i != rear; i = (i + 1) % SIZE) 
	{
      printf("%d ", items[i]);
    }
    printf("%d ", items[i]);
    printf("\nRear -> %d \n", rear);
  }
}

int main() 
{
	int choice;   
    printf("1.Enqueue\n2.Dequeue\n3.Display The Queue\n4.Check Full Or Not\n5.Check Empty Or Not\n6.Exit\n");
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
			case 4: (is_full()) ? (printf("\nQueue Is Full")) : (printf("\nQueue Is Not Full"));
					break;
			case 5: (is_empty()) ? (printf("\nQueue Is Empty")) : (printf("\nQueue Is Not Empty"));
					break; 
            case 6: printf("\nEXIT");
                	break;
            default:printf("\nEnter The Valid Choice\n");  
            		break;
        }  
    }while(choice != 6);
	return 0;
}