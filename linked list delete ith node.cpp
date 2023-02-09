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

Node *delete_ith_node(Node *head, int pos)
{
	int i = 0;
	Node *current = head;
//	if(head == NULL)
//	{
//		return head;
//	}
	if(pos == 0)
	{
		head = current->next;
		delete current;
		return head;
	}
	while(i < pos-1 && current->next != NULL)
	{
		current = current->next;
		i++; 
	}
	if(current->next != NULL)
	{
		Node *temp = (current->next)->next;
		delete current->next;
		current->next = temp;
	}
	return head;
}
int main()
{
	int t;	cin>>t;
	while(t--)
	{
		Node *head = TakeInput();
		print(head);
	
		cout<<"\nEnter The position Is : ";
		int pos; cin>>pos;
		
		head = delete_ith_node(head, pos);
		print(head);
		cout<<endl;	
	}
	return 0;
}