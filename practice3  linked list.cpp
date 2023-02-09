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
}

Node *TakeInput()	
{
	int data;
	cin>>data;
	Node *head = NULL;  Node *tail = NULL;	
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

Node *find_mid(Node *head)
{	
	Node *temp = head;
	
	Node *slow = temp;
	Node *fast = temp->next;
	while(fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;
}

//Node *merge(Node *left, Node *right)
//{
//	if(left == NULL)
//		return right;
//	
//	if(right == NULL)
//		return left;
//	
//	Node *ans = new Node(0);	//dummy node
//	Node * temp = ans;
//	
//	while(left != NULL && right != NULL)
//	{
//		if(left->data <= right->data)
//		{
//			temp->next = left;
//			temp = left;
//			left = left->next;	
//		}	
//		else
//		{
//			temp->next = right;
//			temp = right;
//			right = right->next;
//		}
//	} 
//	while(left != NULL)
//	{
//		temp->next = left;
//		temp = left;
//		left = left->next;
//	}
//	while(right != NULL)
//	{
//		temp->next = right;
//		temp = right;
//		right = right->next;
//	}
//	return ans->next;
//}
Node *merge(Node *head1, Node *head2)
{
    Node *head = NULL, *tail = NULL;
    if (head1 == NULL && head2 == NULL)
        return head;
    if (head1 == NULL)
        return head2;
    if (head2 == NULL)
        return head1;
    if (head1->data <= head2->data)
    {
        head = head1;
        tail = head1;
        head1 = head1->next;
    }
    else if (head1->data > head2->data)
    {
        head = head2;
        tail = head2;
        head2 = head2->next;
    }
    while (head1 != NULL && head2 != NULL)
    {
        if (head1->data <= head2->data)
        {
            tail->next = head1;
            tail = head1;
            head1 = head1->next;
        }
        else if (head1->data > head2->data)
        {
            tail->next = head2;
            tail = head2;
            head2 = head2->next;
        }
    }
    if (head1 == NULL && head2 != NULL)
    {
        while (head2 != NULL)
        {
            tail->next = head2;
            tail = head2;
            head2 = head2->next;
        }
    }
    else if (head2 == NULL && head1 != NULL)
    {
        while (head1 != NULL)
        {
            tail->next = head1;
            tail = head1;
            head1 = head1->next;
        }
    }
    tail->next = NULL;
    return head;
}

Node *merge_sort(Node *head)
{
	if(head == NULL && head->next == NULL)
	{
		return head;
	}
	
	Node *mid = find_mid(head);
	
	Node *left = head;
	Node *right = mid->next;
	mid->next = NULL;
		
	left = merge_sort(left);
	right = merge_sort(right);
	
	return merge(left, right);
}
int main()
{
	Node *head = TakeInput();
	print(head); 
	Node *t = head;
	head = merge_sort(t);
	print(head);	
	return 0;
}