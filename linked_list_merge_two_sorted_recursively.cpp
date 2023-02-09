#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
void print(Node *head)
{
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
} 

Node *TakeInput()
{
    int data;   cin>>data;
    Node *head = NULL;
    Node *tail = NULL;
    while(data != -1)
    {
        Node *newnode = new Node(data);
        if(head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
        cin>>data;
    }
    return head;
}

/*
Node *MergeTwoSorted(Node *l1, Node *l2)		//Iteratively 
{
     if(l1 == NULL)
         return l2;
     if(l2 == NULL)
         return l1;
     Node *ans = new Node(0);
     Node *tail = ans;

     while(l1!=NULL && l2!=NULL)
     {
         if(l1->data <= l2->data)
         {
             tail->next = l1;
             tail = l1;
             l1 = l1->next;
         }
         else
         {
             tail->next = l2;
             tail = l2;
             l2 = l2->next;
         }
     }
     if(l1 == NULL)
     {
         tail->next = l2;
     }
     else
     {
         tail->next = l1;
     }
     return ans->next;
 }
 */
Node *MergeTwoSorted(Node *l1, Node *l2)		//Recursively
{
     Node *result = NULL;
    if(l1 == NULL)
        return l2;
    if(l2 == NULL)
        return l1;
    
    if(l1->data <= l2->data)
    {
        result = l1;
        result->next = MergeTwoSorted(l1->next, l2);
    }        
    else
    {
        result = l2;
        result->next = MergeTwoSorted(l1, l2->next);
    }
    return result;
}
int main()
{
    Node *head1 = TakeInput();
    Node *head2 = TakeInput();
    print(head1);
    cout<<endl;
    print(head2);
    cout<<endl;
    Node *head3 = MergeTwoSorted(head1, head2);
    print(head3);
    return 0;
}