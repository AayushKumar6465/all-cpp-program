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

Node *insertNode(Node *head, int pos, int data)
{
    if (head == NULL)
        return head;
    if (pos == 0)
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }
    else if (pos == 1)
    {
        Node *newNode = new Node(data);
        Node *temp = head->next;
        head->next = newNode;
        newNode->next = temp;
        return head;
    }
    else
    {
    	insertNode(head->next, pos - 1, data);	
	}
    return head;
}
int main()
{
	Node *head = TakeInput();
	print(head);
	
	cout<<"\nEnter The position Is : ";
	int pos; cin>>pos;
	
	cout<<"Enter The Data Is : ";
	int data; cin>>data;
	
	head = insertNode(head, pos, data);
	print(head);
	return 0;
}