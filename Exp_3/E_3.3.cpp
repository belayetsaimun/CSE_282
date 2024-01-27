/*Write a C++ program to insert a node at the beginning of a DLL. [Consider
possible edge cases]*/

#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node *prev;
    Node(int x)
    {
        data = x;
        next = NULL;
        prev = NULL;
    }
    Node(int x,Node *n,Node *p)
    {
        data=x;
        next=n;
        prev=p;
    }
};
Node* CreateDLL(int arr[], int arrsize)
{
    Node *head = NULL, *temp = NULL, *prev = NULL;
    head = new Node(arr[0]);
    prev = head;
    for (int i = 1; i<arrsize; i++)
    {
        temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

void TraverseList(Node *head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

Node* insertAtBeginning(Node* head, int value)
{
    Node* newNode = new Node(value);

    if (head == nullptr)
    {
        return newNode;
    }

    newNode->next = head;
    head->prev= newNode;

    return newNode;
}

int main()
{
    int arr [8] = {2,4,5,6};
    Node *head = CreateDLL(arr,4);
    cout<<"Linked List: ";
    TraverseList(head);
    int value;
    cout << "\nEnter the value to insert at the beginning: ";
    cin >> value;
    head = insertAtBeginning(head, value);
    cout << "Modified Doubly Linked List: ";
    TraverseList(head);

}



