#include<bits/stdc++.h>
using namespace std;

class Node 
{
	public:
	int data;
	Node *next;
	
	Node(int data)
	{
		this -> data = data;
		next = NULL;
	}
};
void print(Node *head)	
{
	Node *temp = head;
	while(temp != NULL)
	{
		cout<<temp->data<<" ";
		temp = temp -> next;
	}
	cout<<endl;
}
Node *TakeInput()	
{
	int data;
	cin>>data;
	Node *head = NULL;  
	Node *tail = NULL;	
	while(data != -1)
	{
		Node *new_node = new Node(data);
		if(head == NULL)
		{
			head = new_node;
			tail = new_node;
		}
		else
		{
			tail->next = new_node;
			tail = new_node;
		}
		cin>>data;
	}
	return head;
}

void skipM_deleteN(Node *head, int M, int N) 
{ 
    Node *curr = head, *t = NULL; 
    int count; 
  
    // The main loop that traverses through the whole list 
    while (curr) 
    { 
        // Skip M nodes 
        for (count = 1; count < M && curr != NULL; count++) 
            curr = curr->next; 
  
        // If we reached end of list, then return 
        if (curr == NULL) 
            return; 
  
        // Start from next node and delete N nodes 
        t = curr->next; 
        for (count = 1; count<=N && t!= NULL; count++) 
        { 
            Node *temp = t; 
            t = t->next; 
            free(temp); 
        } 
          
        // Link the previous list with remaining nodes 
        curr->next = t; 
  
        // Set current pointer for next iteration 
        curr = t; 
    } 
}
int main()
{
	Node *head = TakeInput();
	print(head);
	
	cout<<"Enter The Value Of M And N Is : \n";
	int M, N;	cin>>M>>N;	
	
	skipM_deleteN(head, M, N);
	print(head);
	
	return 0;
}