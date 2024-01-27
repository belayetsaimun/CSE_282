/*Write a C++ program to insert an element at kth position in a singly linked
list. [Consider possible edge cases]*/

#include<bits/stdc++.h>
using namespace std;

struct Node
{
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

Node* insertAtKthPosition(Node* head, int k, int value)
{
    if (k < 1)
    {
        cout << "Invalid position. Position should be greater than or equal to 1." <<endl;
        return head;
    }

    Node* newNode = new Node(value);

    if (k == 1)
    {
        newNode->next = head;
        return newNode;
    }

    Node* current = head;
    int currentPosition = 1;

    while (currentPosition < k - 1 && current != nullptr)
    {
        current = current->next;
        currentPosition++;
    }

    if (current == nullptr)
    {
        cout << "Invalid position. Position exceeds the size of the linked list." <<endl;
        delete newNode;
        return head;
    }

    newNode->next = current->next;
    current->next = newNode;

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
    cout<<"Linked List: ";
    TraverseList(head);
    int k, value;
    cout << "\nEnter the position to insert the element: ";
    cin >> k;
    cout << "Enter the value to insert: ";
    cin >> value;
    head = insertAtKthPosition(head, k, value);
    cout << "Modified Linked List: ";
    TraverseList(head);
}

