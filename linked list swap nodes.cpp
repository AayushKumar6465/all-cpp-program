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

Node *SwapNodes(Node *head, int i, int j)
{
	if(head == NULL)
	{
		return head;
	}
	
	Node *current = head;
	Node *val1 = NULL, *val2 = NULL;
	int k = 0;
	while(k <= i || k <= j)
	{
		if(k == i)
			val1 = current;
		
		if(k == j)
			val2 = current;
		
		current = current->next;
		k++;
	}
	int temp = val1->data;
	val1->data = val2->data;
	val2->data = temp;
	
	return head; 
}
int main()
{
	Node *head = TakeInput();
	print(head);
	
	cout<<"Enter The Value Of M And N Is : \n";
	int i, j;	cin>>i>>j;	
	
	head = SwapNodes(head, i, j);
	print(head);
	
	return 0;
}