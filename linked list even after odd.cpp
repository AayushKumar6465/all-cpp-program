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
Node *EvenAfterOdd(Node *head)
{
	Node *evenhead = NULL, *eventail = NULL; 
	Node *oddhead = NULL, *oddtail = NULL;
	if(head == NULL)
	{
		return head;
	}
	while(head != NULL)
	{
		if((head->data%2) == 0)
		{
			if(evenhead == NULL)
			{
				evenhead = head;
				eventail = head;
			}
			else
			{
				eventail->next = head;
				eventail = head;
			}
		}
		else
		{
			if(oddhead == NULL)
			{
				oddhead = head;
				oddtail = head;
			}
			else
			{
				oddtail->next = head;
				oddtail = head;
			}
		}
		head = head->next;
	}
	
	if(oddtail != NULL)
		oddtail->next = evenhead;
	
	if(eventail != NULL)
		eventail->next = NULL;
	
	if(oddhead == NULL)
		return evenhead;
	else
		return oddhead;
}
int main()
{
	Node *head = TakeInput();
	print(head);	
	head = EvenAfterOdd(head);
	print(head);
	return 0;
}