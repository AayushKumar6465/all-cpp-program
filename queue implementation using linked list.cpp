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

class Queue
{
	Node *head;
	Node *tail;
	int size;
	
	public:
	Queue()
	{
		head = tail = NULL;
		size = 0;	
	}	
	
	int getsize()
	{
		return size;
	}
	
	int isEmpty()
	{
		return size==0;
	}
	
	int front()
	{
		if(isEmpty())
		{
			return 0;
		}
		return head->data;
	}
	
	void enqueue(int element)
	{
		Node *newNode = new Node(element);
		if(head == NULL)
		{
			head = tail = newNode;
		}
		else
		{
			tail->next = newNode;
			tail = newNode;
			size++;
		}
	}
	
	int dequeue()
	{
		if(isEmpty())
		{
			return 0;
		}
		
		int ans = head->data;
		Node *temp = head;
		head = head->next;
		delete temp;
		size--;
		return ans;
	}
	
	void display()
	{
		if(isEmpty())
		{
			cout<<"\nQueue IS Empty\n";
		}
		
		Node *temp = head;
		while(temp != NULL)
		{
			cout<<temp->data<<" ";
			temp = temp -> next;
		}
	} 
};

int main()
{
	Queue q;
	
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.enqueue(50);
	q.display();
	cout<<endl<<q.front()<<endl;
	q.dequeue();
	cout<<endl<<q.front()<<endl;
	
	return 0;
}