/*Write a C++ program to delete the last node of a Singly Linked List.*/

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
    for(int i = 1; i < arrsize; i++)
    {
        Node *temp = new Node(arr[i]);
        current->next = temp;
        current = temp;
    }
    return head;
}
Node* deleteLastNode(Node* head)
{
    if(head==NULL)
    {
        return NULL;
    }
    if(head->next==NULL)
    {
        delete head;
        return NULL;
    }
    Node* current = head;
    while(current->next->next!=NULL)
    {
        current=current->next;
    }
    delete current->next;
    current->next = NULL;
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
int main()
{
    int arr[8] = {2,4,5,6};
    Node *head = constructLL(arr,4);
    head = deleteLastNode(head);
    TraverseList(head);
}
