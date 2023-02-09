#include<bits/stdc++.h>
using namespace std;

class Stack
{
	public:
	int size;
	int *arr;
	int top;
	
	Stack(int size)		//Constructor 
	{
		this->size = size;
		arr = new int[size];
		top = -1;	
	}	
	
	void push(int element)
	{
		if(size - top > 1)
		{
			top++;
			arr[top] = element;
		}
		else
		{
			cout<<"\nStack Is Overflow\n";
		}
	}
	
	void pop()
	{
		if(top >= 0)
		{
			top--;
		}
		else
		{
			cout<<"\nStack Is Underflow\n";
		}
	}
	
	int peek()
	{
		if(top >= 0)
		{
			return arr[top];
		}
		else
		{
			cout<<"\nStack Is Empty\n";
			return -1;
		}
	}
	
	bool empty()
	{
		if(top == -1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

int main()
{
	Stack st(7);
	
	st.push(10);
	st.push(20);
	st.push(30);
	st.push(40);
	st.push(50);
	st.push(60);
	st.push(70);
	cout<<"The Top Element Is : "<<st.peek()<<endl;
	if( st.empty() )
		cout<<"True";
	else
		cout<<"False";
	return 0;
}