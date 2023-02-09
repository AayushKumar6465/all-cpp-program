#include<bits/stdc++.h>
using namespace std;

class Node 
{
	public:
	int data;
	Node *next;
	Node *prev;
	
	Node(int data)
	{
		prev = NULL;
		this -> data = data;
		next = NULL;
	}
};
void print(Node *head)	
{
	Node *temp = head;
	while(temp != NULL)
	{
		cout<<temp->data<<" ";
		temp = temp -> next;
	}
}
//Node *TakeInput()	 
//{
//	int data;
//	cin>>data;
//	Node *head = NULL; 
//	Node *tail = NULL;
//	while(data != -1)
//	{
//		Node *new_node = new Node(data);
//		if(head == NULL)
//		{
//			head = new_node;
//			tail = new_node;
//		}
//		else
//		{
//			tail->next = new_node;
//			tail = new_node;
//		}
//		cin>>data;
//	}
//	return head;
//}
Node *TakeInput() 
{    
	int data;	cin>>data;
	
	Node *head = NULL; 
	Node *tail = NULL;
    Node *prev = NULL;
    
	while(data != -1)
	{  
		Node *newNode = new Node(data);
    	if(head == NULL)	//If list is empty 
		{    
        	head = tail = newNode;		//Both head and tail will point to newNode  
        	
        	head->prev = NULL;		//head's previous will point to NULL    
        	  
        	tail->next = NULL;		//tail's next will point to NULL, as it is the last node of the list  
    	}  
    	else 
		{  
        	tail->next = newNode;		//newNode will be added after tail such that tail's next will point to newNode    
        	
        	tail->next->prev = tail;		//newNode's previous will point to tail    
        	
        	tail = newNode;		//newNode will become new tail    
        	  
        	tail->next = NULL;		//As it is last node, tail's next will point to NULL  
    	}	
    	cin>>data;
	}  
	return head;
}
int main()
{
	Node *head = TakeInput();
	print(head);
	
	//cout<<"\nEnter The position Is : ";
	//int pos; cin>>pos;
	
	//cout<<"Enter The Data Is : ";
	//int data; cin>>data;
	
	//head = insert_ith_node(head, pos, data);
	//print(head);
	return 0;
}