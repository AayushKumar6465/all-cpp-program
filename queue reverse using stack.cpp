#include<bits/stdc++.h>
using namespace std;

void reverseQueue(queue<int> &q)
{
	stack<int> st;
	
	while(!q.empty())
	{
		int curr = q.front();
		q.pop();
		st.push(curr);
	}
	
	while(!st.empty())
	{
		int curr = st.top();
		st.pop();
		q.push(curr);
	}
}

void printQueue(queue<int> &q)
{
	while(!q.empty())
	{
		cout<<q.front()<<" ";
		q.pop();
	}
}
int main()
{
	queue<int> q;
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	q.push(50);
	q.push(60);
	
	reverseQueue(q);
	printQueue(q);
	return 0;
}