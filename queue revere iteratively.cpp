#include<bits/stdc++.h>
using namespace std;

void reverseQueue(queue<int> &q)
{
	stack<int> st;
	while(!q.empty())
	{
		st.push(q.front());
		q.pop();
	}
	
	while(!st.empty())
	{
		q.push(st.top());
		st.pop();
	}
}
int main()
{
	queue<int> q;
	
	int n;	cin>>n;
	for(int i=0, value; i<n; i++)
	{
		cin>>value;
		q.push(value);
	}
	
	reverseQueue(q);
	
	//q.display();
	while( !q.empty() )
	{
		cout<<q.front()<<" ";
		q.pop();
	}
	return 0;
}