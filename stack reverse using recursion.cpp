#include<bits/stdc++.h>
using namespace std;

void InsertAtBottom(stack<int> &input, int data)
{
	if(input.empty())
	{
		input.push(data);
		return;
	}
	
	int top = input.top();
	input.pop();
	
	InsertAtBottom(input, data);
	
	input.push(top);
}
void reversestack(stack<int> &input)
{
	if(input.empty())
	{
		return;
	}
	
	int data = input.top();
	input.pop();
	
	reversestack(input);
	
	InsertAtBottom(input, data);
}
int main()
{
	stack<int> input;
	
	int n;	cin>>n;
	for(int i=0, value; i<n; i++)
	{
		cin>>value;
		input.push(value);
	}
	
	reversestack(input);
	
	while( !input.empty() )
	{
		cout<<input.top()<<" ";
		input.pop();
	}
	return 0;
}