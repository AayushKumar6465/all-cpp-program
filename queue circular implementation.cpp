#include<bits/stdc++.h>
using namespace std;

class Queue
{
	int *arr;
	int size;
	int front;
	int rear;
	
public:
	Queue(int n)
	{
		size = n;
		arr = new int[n];
		front = rear = -1;
	}
	
	bool isfull()
	{
		if(front == 0 && rear == size-1)
			return true;
		else if(front == rear+1)
			return true;
		else
			return false;
	}
	
	bool isempty()
	{
		if(front == -1)
			return true;
		else
			return false;
	}
	
	void enqueue(int value)
	{
		if( (front == 0 && rear == size-1) || (rear == (front-1)%(size-1)) )
		{
			cout<<"\nQueue Is Full"<<endl;
		}
		else if(front == -1)
		{
			front = rear = 0;
			arr[rear] = value;
		}
		else if(rear = size-1 && front != 0)
		{
			rear = 0;
			arr[rear] = value;
		}
		else
		{
			rear++;
			arr[rear] = value;
		}
	}
	
	int dequeue()
	{
		if(isempty())
		{
			cout<<"\nQueue Is Empty"<<endl;
			return -1;
		}
		
		int ans = arr[front];
		arr[front] = -1;
		if(front == rear)
		{
			front = rear = -1;
		}
		else if(front == size-1)
		{
			front = 0;
		}
		else
		{
			front++;
		}
		return ans;
	}
};
int manin()
{
	Queue q(7);
	
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.enqueue(50);
	q.enqueue(60);
	
	return 0;
}