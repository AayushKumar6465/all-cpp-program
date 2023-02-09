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
Node *TakeInput()	//Taking Input From The User 
{
	int data;
	cin>>data;
	Node *head = NULL;  //First Node's Address Stored In Node Type Pointer Variable Is Head
	Node *tail = NULL;	//Last Node's Address Stored In Node Type Pointer Variable Is Tail
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
void find_ith_element(Node *head, int pos)
{
	int i = 0;
	Node *current = head;
	while(current != NULL)
	{
		if(i == pos)
		{
			cout<<current->data<<endl;
			break;
		}
		current = current->next;
		i++;
	}
}
int main()
{
	Node *head = TakeInput();
	cout<<"Enter The Position : ";
	int pos; cin>>pos;
	find_ith_element(head, pos);
	return 0;
}