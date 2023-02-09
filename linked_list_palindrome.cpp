#include<bits/stdc++.h>
using namespace std;

class Node
{
	public:
	int data;
	Node *next;
	
	Node(int data)
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
			tail->next = newnode;
			tail = newnode;
		}
		cin>>data;
	}
	return head;
}

bool ispalindrome(Node *head)
{
	if(head == NULL || head->next == NULL)
		return true;	
	
	Node *current = head;
	Node *prev = NULL;
	
	while(current->next != NULL)
	{
		prev = current;
		current = current->next;
	}
	
	if(head->data == current->data)
	{
		prev->next = NULL;
		delete current;
		return ispalindrome(head->next);
	}
	else
	{
		return false;
	}
} 
int main()
{
	Node *head = TakeInput();
	print(head);
	cout<<endl;
	bool ans = ispalindrome(head);
	if(ans)
		cout<<"true";
	else
		cout<<"false";
	return 0;
}