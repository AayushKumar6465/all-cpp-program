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
int length(Node *head)
{
	if(head == NULL)
	{
		return 0;
	}
	return 1 + length(head->next);
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
Node *append(Node *head, int k)
{
	Node *newhead, *newtail;
	Node *tail = head;
	
	int l = length(head);
	int count = 1;
	
	while(tail->next != NULL)
	{
		if(count == l-k)
		{
			newtail = tail;
		}
		if(count == l-k+1)
		{
			newhead = tail;
		}
		tail = tail->next;
		count++;
	}
	newtail->next = NULL;
	tail->next = head;
	return newhead;
}
int main()
{
	Node *head = TakeInput();
	print(head);
	
	cout<<"\nEnter the value Of K Is : ";
	int k; cin>>k;
	
	head = append(head, k);
	print(head);
	
	return 0;
}