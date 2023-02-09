// Circular Queue implementation in C++

#include <iostream>
//#define SIZE 5 		// Size of Circular Queue
using namespace std;

class Queue 
{
	int *arr, front, rear, size;
	public:
  	
	Queue(int n) 
	{
		size = n;
		arr = new int[n];
    	front = rear = -1;
  	}
  	// Check if the queue is full
  	bool isFull() 
	{
    	if (front == 0 && rear == size - 1) 
		{
      		return true;
    	}
    	if (front == rear + 1) 
		{
      		return true;
    	}
    	return false;
  	}
  	// Check if the queue is empty
  	bool isEmpty() 
	{
    	if (front == -1)
      		return true;
    	else
      		return false;
  	}
  	// Adding an element
  	void enQueue(int element) 
	{
    	if (isFull()) 
		{
      		cout << "\nQueue is full"<< endl;
    	} 
		else 
		{
      		if (front == -1) 
			  front = 0;
      		
			rear = (rear + 1) % size;
      		arr[rear] = element;
      		cout<<"\nInserted " <<element;
    	}
  	}
  	// Removing an element
  	int deQueue() 
	{
    	int ans;
    	if (isEmpty()) 
		{
      		cout << "\nQueue is empty" << endl;
      		return (-1);
    	} 
		else 
		{
      		ans = arr[front];
      		if (front == rear) 
			{
        		front = rear = -1;
      		}
      		// Q has only one element, so we reset the queue after deleting it.
      		else 
			{
        		front = (front + 1) % size;
      		}
      		return ans;
    	}
  	}

  	void display() 
	{
    	// Function to display status of Circular Queue
    	int i;
    	if (isEmpty()) 
		{
      		cout<< endl << "Empty Queue" << endl;
    	} 
		else 
		{
      		//cout << "\nFront -> " << front;
      		cout << endl << "Items -> ";
      		for (i = front; i != rear; i = (i + 1) % size)
        		cout << arr[i];
      		
			//cout << items[i];
      		//cout << endl << "Rear -> " << rear;
    	}
  	}
  	//delete []arr;
};

int main() 
{
	Queue q(6);

  	// Fails because front = -1
  	q.deQueue();

  	q.enQueue(1);
  	q.enQueue(2);
  	q.enQueue(3);
  	q.enQueue(4);
  	q.enQueue(5);
	q.display();
  	// Fails to enqueue because front == 0 && rear == SIZE - 1
  	q.enQueue(6);

  	q.display();

  	int elem = q.deQueue();

  	if (elem != -1)
    	cout << endl << "Deleted Element is " << elem;

  	q.display();

  	q.enQueue(11);

  	q.display();

  	// Fails to enqueue because front == rear + 1
  	q.enQueue(8);

  	return 0;
}