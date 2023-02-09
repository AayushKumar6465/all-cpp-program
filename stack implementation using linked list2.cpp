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

class Stack
{
	//-------Define The Data Members--------//
	Node *head;
	int size;
	
	public:
	
	//------Implementing Default Constructor------//
	Stack()
	{
		head = NULL;
		size = 0;
	}	
	
	//-------------------Public Member Functions Of Stack---------------------//
	int getsize()
	{
		return size;	
	}
	
	bool isempty()
	{
		return head == NULL;
	}
	
	void push(int value)
	{
		Node *newnode = new Node(value);
		newnode->next = head;
		head = newnode;
		size++;
	}
	
	int pop()
	{
		if( isempty() )
		{
			return -1;
		}
		int DoH = head->data;	//DoH Mean Data Of Head
		Node *p = head;
		head = head->next;
		delete p;
		size--;
		return DoH;
	}
	
	int top()
	{
		if( isempty() )
			return -1;
		
		return head->data;
	}
};
int main()
{
	Stack st;
	
	st.push(10);
	st.push(20);
	st.push(30);
	st.push(40);
	st.push(50);
	st.pop(); 
	cout<<st.top()<<endl;
	cout<<st.getsize()<<endl;
	return 0;
}