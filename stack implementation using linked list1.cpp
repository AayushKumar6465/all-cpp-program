#include<bits/stdc++.h>
using namespace std;

class Node
{
	public:
	int data;
	Node *next;
};

Node *top = NULL;
bool isempty()
{
	if(top == NULL)
		return true;
	else
		return false;
}

void push(int value)
{
	Node *newnode = new Node();
	newnode->data = value;
	newnode->next = top;
	top = newnode;
}

void pop()
{
	if( isempty() )
	{
		cout<<"Stack Is Empty";
	}	
	else
	{
		Node *p = top;
		top = top->next;
		delete p;
	}
}

void showtop()
{
	if( isempty() )
	{
		cout<<"Stack Is Empty";
	}
	else
	{
		cout<<top->data<<endl;
	}
}

int main()
{
	push(5);
	push(10);
	push(15);
	push(20);
	
	pop();
	showtop();
	(isempty()) ? cout<<"Stack Is Empty" : cout<<"Stack Is Not Empty";
	return 0;
}