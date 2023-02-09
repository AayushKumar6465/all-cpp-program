#include<bits/stdc++.h>
using namespace std;

class Queue
{
	int *arr;
	int size;
	int front;
	int rear;
	
	public:
	Queue(int size)
	{
		this->size = size;
		arr = new int[size];
		front = rear = -1;	
	}	
	
	bool empty()
	{
		if(front == rear)
			return true;
		else
			return false;
	}
	
	void enqueue(int element)
	{
		if(rear == size)
		{
			cout<<"Queue Is Full"<<endl;
		}
		else
		{
			arr[rear] = element;
			rear++;
		}
	}
	
	void dequeue()
	{
		if(empty())
		{
			cout<<"Queue IS Empty"<<endl;
		}
		else
		{
			arr[front] = -1;
			front++;
			
			if(front == rear)
			{
				front = 0;
				rear = 0;
			}
		}
	}
	
	void display()
	{
		if(empty())
		{
			cout<<"Queue Is Empty"<<endl;
		}
		else
		{
			for(int i=front; i<rear; i++)
			{
				cout<<arr[i]<<" ";
			}
			cout<<endl;
		}
	}
};
int main()
{
	Queue q(5);
	
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.enqueue(50);
	
	q.display();
	q.dequeue();
	q.display();
	
	return 0;	
}