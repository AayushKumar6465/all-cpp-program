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

int find_node(Node *head, int num)
{
	if(head == NULL)
	{
		return -1;
	}
	
	if(head->data == num)
	{
		return 0;
	}
	else
	{
		int pos = find_node(head->next, num);
		if(pos != -1)
		{
			return 1 + pos;
		}
		else
		{
			return -1;
		}
	}
}
int main()
{
	Node *head = TakeInput();
	print(head);
	cout<<"Enter The Number Is : ";
	int num;	cin>>num;
	cout<<find_node(head, num);
	return 0;
}