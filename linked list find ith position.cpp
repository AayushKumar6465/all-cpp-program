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
int find_ith_element(Node *head, int data)
{
	int pos = 0;
	Node *current = head;
	while(current != NULL)
	{
		if(current->data == data)
		{
			return pos;
		}
		else
		{
			current = current->next;
			pos++;	
		}
	}
	return -1;
}
int main()
{
	Node *head = TakeInput();
	cout<<"Enter The Data : ";
	int data; cin>>data;
	cout<<find_ith_element(head, data);
	return 0;
}