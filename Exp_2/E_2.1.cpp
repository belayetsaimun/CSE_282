/*Write a C++ program to insert a new node at the end of a Singly Linked
List [Consider all edge cases].*/

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node* constructLL(int arr[], int arrsize)
{
    Node *head = new Node(arr[0]);
    Node *current = head;
    for(int i = 1; i<arrsize; i++)
    {
        Node *temp = new Node(arr[i]);
        current-> next = temp;
        current = temp;
    }
    return head;
}

Node* insertAtLast(Node* head, int newValue)
{
    Node *newNode = new Node(newValue);
    if(head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node* temp = head;
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    return head;
}

void TraverseList(Node* head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main()
{
    int arr[8] = {2,4,5,6};
    Node *head = constructLL(arr,4);
    head = insertAtLast(head,9);
    TraverseList(head);
}
