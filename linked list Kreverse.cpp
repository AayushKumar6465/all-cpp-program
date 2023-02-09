#include<bits/stdc++.h>
using namespace std;

class Node 
{
	public:
	int data;
	Node *next;
	
	Node (int data)
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
	cout<<endl;
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
			tail->next = newnode ;
			tail = newnode;
		}
		cin>>data;
	}
	return head;
}
Node *Kreverse(Node *head, int k)
{
	if(head == NULL)
	{
		return NULL;
	}
	
	//Step 1 Is Reverse K Nodes 
	Node *current = head;
	Node *next = NULL;
	Node *prev = NULL;
	int count = 0;
	
	while(current != NULL && count < k)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
		count++;
	}
	
	//IN Step 2 Aage Ka Recursion Apne Aap Dekh Lega 
	if(next != NULL)
	{
		head->next = Kreverse(next, k);
	}
	
	//And Step 3 Me Return Krdenge Previous Jiske Andder New List Ka Head H
	return prev;
}
int main()
{
	Node *head = TakeInput();
	print(head);
	
	cout<<"Enter The Value Of K IS : ";
	int k;	cin>>k;
	
	head = Kreverse(head, k);
	print(head);
	
	return 0; 
}