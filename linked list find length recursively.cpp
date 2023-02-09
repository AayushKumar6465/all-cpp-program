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
void print(Node *head)	
{
	Node *temp = head;
	while(temp != NULL)
	{
		cout<<temp->data<<" ";
		temp = temp -> next;
	}
}
Node *TakeInput()	 
{
	int data;
	cin>>data;
	Node *head = NULL;  
	Node *tail = NULL;	
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
int length(Node *head)	//Finding Length Of The Linked List Recursively  
{
	if(head == NULL)
	{
		return 0;
	} 
	else
	{
		return 1 + length(head->next);	
	}
}
int main()
{
	Node *head = TakeInput();
	print(head);	
	cout<<endl<<length(head);
	return 0;
}