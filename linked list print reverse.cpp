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

void print_reverse(Node *head)
{
	if(head == NULL)
	{
		return;
	}
	
	print_reverse(head -> next);
	
	cout<<head->data<<" ";
}
int main()
{
	Node *head = TakeInput();
	print(head);
	
	cout<<endl<<"Reverse List Is : \n";
	
	print_reverse(head);
	return 0;
}