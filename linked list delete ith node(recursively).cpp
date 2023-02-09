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
	if(head == NULL && head->next == NULL)
	{
		return head;
	}
	
	if(pos == 0)
	{
		Node *current = head;
		head = current->next;
		delete current;
		return head;
	}
	else if(pos == 1)
	{
		Node *temp = (head->next)->next;
		delete head->next;
		head->next = temp;
		return head;
	}
	else
	{
		delete_ith_node(head->next, pos-1);
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