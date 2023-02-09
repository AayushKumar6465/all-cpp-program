#include<bits/stdc++.h>
using namespace std;

class Node 
{
	public:
	int data;
	Node *next;
	
	Node(int data)
	{
		this -> data = data;
		next = NULL;
	}
};
void print(Node *head)	//For Printing Linked List 
{
	Node *temp = head;
	while(temp != NULL)
	{
		cout<<temp->data<<" ";
		temp = temp -> next;
	}
}
Node *TakeInput()	//Taking Input From The User 
{
	int data;
	cin>>data;
	Node *head = NULL;  //First Node's Address Stored In Node Type Pointer Variable Is Head
	Node *tail = NULL;	//Last Node's Address Stored In Node Type Pointer Variable Is Tail
	while(data != -1)
	{
		Node *new_node = new Node(data);
		if(head == NULL)
		{
			head = new_node;
			tail = new_node;
		}
		else
		{
			tail->next = new_node;
			tail = new_node;
		}
		cin>>data;
	}
	return head;
}
int length(Node *head)	//Finding Length Of The Linked List  
{
	int len = 0;
	Node *current = head;
	while(current != NULL)
	{
		len++;
		current = current->next;	
	} 
	return len;
}
int main()
{
	Node *head = TakeInput();
	print(head);	
	cout<<endl<<length(head);
	return 0;
}