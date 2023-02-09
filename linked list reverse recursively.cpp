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
	cout<<endl;
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
Node *reverseLL(Node *head)
{
	if(head == NULL || head->next == NULL)
	{
		return head;
	}
	
	Node *second_head = reverseLL(head->next);
	
	(head->next)->next = head;
	head->next = NULL;
	
	return second_head;
}
int main()
{
	Node *head = TakeInput();
	print(head);
	head = reverseLL(head);
	print(head);	
	return 0;
}