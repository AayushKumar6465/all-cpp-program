#include<bits/stdc++.h>
using namespace std;

class Node
{
	public:
	int data;
	Node *next;
	
	Node(int data)
	{
		this->data = data;
		next = NULL;	
	}	
};

void print(Node *head)
{
	Node *temp = head;
	while(temp != NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}
Node *TakeInput()
{
	int data;	cin>>data;
	Node *head = NULL;
	Node *tail = NULL;
	
	while(data != -1)
	{
		Node *newnode = new Node(data);
		if(head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
		cin>>data;
	}
	return head;
}
Node *eliminate_duplicate(Node *head)
{
	Node *current = head;
	while(current->next != NULL && current != NULL)
	{
		if(current->data == current->next->data)
		{
			Node *temp = current->next->next;
			delete  current->next;
			current->next = temp;
		}
		else
		{
			current = current->next;
		}
	}
	return head;
}
int main()
{
	Node *head = TakeInput();
	print(head);
	
	cout<<endl;
	
	head = eliminate_duplicate(head);
	print(head);
	
	return 0;
}