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
Node *insert_ith_node(Node *head, int pos, int data)
{
	Node *newnode = new Node(data);
	int count = 0;
	Node *temp = head;
	if(pos == 0)
	{
		newnode->next = head;
		head = newnode;
		return head;
	}
	while(temp != NULL && count < pos-1)
	{
		temp = temp->next;
		count++;
	}
	if(temp != NULL)
	{
		newnode->next = temp->next;
		temp->next = newnode;
	}
	return head;
}
int main()
{
	Node *head = TakeInput();
	print(head);
	
	cout<<"\nEnter The position Is : ";
	int pos; cin>>pos;
	
	cout<<"Enter The Data Is : ";
	int data; cin>>data;
	
	head = insert_ith_node(head, pos, data);
	print(head);
	return 0;
}