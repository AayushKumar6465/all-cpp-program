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
		Node *newnode = new Node(data);
		if(head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail -> next = newnode;
			tail = newnode;
		}
		cin>>data;
	}
	return head;
}

int length(Node *head)
{
	int len = 0;
	Node *current = head;
	while(current != NULL)
	{
		len++;
		current = current -> next; 	
	}	
	return len;
} 

void find_ith_element(Node *head, int pos)
{
	int count = 0;
	Node *current = head;
	while(current != NULL)
	{
		if(count == pos)
		{
			cout<<current->data<<" ";
			break;
		}
		current = current -> next;
		count++;
	}
}

int main()
{
	Node *head = TakeInput();
	print(head);
	cout<<endl;
	cout<<length(head);
	cout<<endl<<"Enter The Position : ";
	int pos; cin>>pos;
	find_ith_element(head, pos);
	return 0;
}