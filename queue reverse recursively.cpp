#include<bits/stdc++.h>
using namespace std;

void reverseQueue(queue<int> &q)
{
	if(q.empty())
	{
		return;
	}
	
	int data = q.front();
	q.pop();
	
	reverseQueue(q);
	
	q.push(data);
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