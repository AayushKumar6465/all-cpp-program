#include<bits/stdc++.h>
using namespace std;

void printQueue(queue<int> &Q)
{
	while(!Q.empty())
	{
		cout<<Q.front()<<" ";
		Q.pop();
	}
}

void reverseQueue(queue<int> &Q)
{
	if(Q.empty())
	{
		return;
	}
	
	int data = Q.front();
	Q.pop();
	
	reverseQueue(Q);
	
	Q.push(data);
}

int main()
{
	queue<int> Q;
	Q.push(10);
	Q.push(20);
	Q.push(30);
	Q.push(40);
	Q.push(50);
	Q.push(60);
	Q.push(70);
	Q.push(80);
	Q.push(90);
	Q.push(100);
	
	reverseQueue(Q);
	printQueue(Q);
	return 0;
}