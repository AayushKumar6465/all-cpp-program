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

Node *find_mid(Node *head)
{
	if(head == NULL || head->next == NULL)
		return head;
	
	Node * slow = head;
	Node * fast = head->next;
	while(fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;
}

int main()
{
	Node *head = TakeInput();
	print(head);
	Node *mid = find_mid(head);
	//cout<<mid->data<<endl;
	if(mid != NULL)
	{
		cout<<endl<<mid->data;	
	}	
	return 0;
}