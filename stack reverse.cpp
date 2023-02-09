#include<bits/stdc++.h>
using namespace std;

void reverse_stack(stack<int> &input, stack<int> &extra)
{
	while( !input.empty() )
	{
		int p = input.top();
		extra.push(p);
		input.pop();
	}
	input = extra;
}

int main()
{
	stack<int> input, extra;
	
	int n;	cin>>n;
	for(int i=0, value; i<n; i++)
	{
		cin>>value;
		input.push(value);
	}
	
	reverse_stack(input, extra);
	
	while( !input.empty() )
	{
		cout<<input.top()<<" ";
		input.pop();
	}
	return 0;
}