#include<stdio.h>  
#include<stdlib.h>  

struct node   
{  
    int data;  
    struct node *next;   
};  
struct node *head;  

void insert_at_front()  
{    
    int item;  
    struct node *newNode = (struct node *) malloc(sizeof(struct node *));  
    if(newNode == NULL)  
    {  
        printf("\nOVERFLOW");  
    }  
    else  
    {  
        printf("Enter Value : ");    
        scanf("%d", &item);    
        newNode->data = item;  
        newNode->next = head;  
        head = newNode;  
        printf("Node Inserted");  
    }  
}
  
void insert_at_last()  
{  
    struct node *newNode, *temp;  
    int item;     
    newNode = (struct node*)malloc(sizeof(struct node));      
    if(newNode == NULL)  
    {  
        printf("\nOVERFLOW");     
    }  
    else  
    {  
        printf("Enter value : ");  
        scanf("%d",&item);  
        newNode->data = item;  
        if(head == NULL)  
        {  
            newNode -> next = NULL;  
            head = newNode;  
            printf("Node Inserted");  
        }  
        else  
        {  
            temp = head;  
            while (temp->next != NULL)  
            {  
                temp = temp->next;  
            }  
            temp->next = newNode;  
            newNode->next = NULL;  
            printf("Node Inserted");
        }  
    }  
}  
void random_insert()  
{  
    int i, pos, item;   
    struct node *newNode, *temp;  
    newNode = (struct node *) malloc (sizeof(struct node));  
    if(newNode == NULL)  
    {  
        printf("\nOVERFLOW");  
    }  
    else  
    {  
        printf("\nEnter element value");  
        scanf("%d",&item);  
        newNode->data = item;  
        printf("\nEnter the location after which you want to insert ");  
        scanf("\n%d",&pos);  
        temp = head;  
        for(i=0;i<pos;i++)  
        {  
            temp = temp->next;  
            if(temp == NULL)  
            {  
                printf("\nCan't Insert\n");  
                return;  
            }  
          
        }  
        newNode ->next = temp ->next;   
        temp ->next = newNode;   
        printf("\nNode Inserted");  
    }  
}  
void begin_delete()  
{  
    struct node *ptr;  
    if(head == NULL)  
    {  
        printf("\nList Is Empty\n");  
    }  
    else   
    {  
        ptr = head;  
        head = ptr->next;  
        free(ptr);  
        printf("\nNode Deleted From The Begining\n");  
    }  
}  
void last_delete()  
{  
    struct node *ptr,*ptr1;  
    if(head == NULL)  
    {  
        printf("\nlist is empty");  
    }  
    else if(head -> next == NULL)  
    {  
        head = NULL;  
        free(head);  
        printf("\nOnly node of the list deleted ...\n");  
    }  
          
    else  
    {  
        ptr = head;   
        while(ptr->next != NULL)  
        {  
            ptr1 = ptr;  
            ptr = ptr ->next;  
        }  
        ptr1->next = NULL;  
        free(ptr);  
        printf("\nDeleted Node from the last ...\n");  
    }     
}  
void random_delete()  
{  
    struct node *ptr,*ptr1;  
    int loc,i;    
    printf("\n Enter the location of the node after which you want to perform deletion \n");  
    scanf("%d",&loc);  
    ptr=head;  
    for(i=0;i<loc;i++)  
    {  
        ptr1 = ptr;       
        ptr = ptr->next;  
              
        if(ptr == NULL)  
        {  
            printf("\nCan't delete");  
            return;  
        }  
    }  
    ptr1 ->next = ptr ->next;  
    free(ptr);  
    printf("\nDeleted node %d ",loc+1);  
}  
void display()  
{  
    struct node *ptr;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("Nothing to print");  
    }  
    else  
    {  
        printf("\nPrinting Values\n");   
        while (ptr != NULL)  
        {  
            printf("%d ", ptr->data);  
            ptr = ptr->next;  
        }  
    }  
}     
int main()  
{  
    int choice = 0;
	printf("1.Insert At Begining\n2.Insert At Last\n3.Insert At Any Random Location\n4.Delete From Beginning\n5.Delete From Last\n6.Delete Node After Specified Location\n7.Display Elements\n8.Exit\n"); 
	do   
    {      
        printf("\nEnter Your Choice : ");         
        scanf("%d", &choice);  
        switch(choice)  
        {  
            case 1: insert_at_front();  
					break;  
            case 2: insert_at_last();   
					break;  
            case 3: random_insert();       
            		break;  
            case 4: begin_delete();       
            		break;  
            case 5: last_delete();        
            		break;  
            case 6: random_delete();          
            		break;   
            case 7: display();        
            		break;  
            case 8: printf("\n.....EXIT.....\n");  
            		break;  
            default:printf("\nPlease Enter Valid Choice\n"); 
        }  
    }while(choice != 8);
    return 0;
}                