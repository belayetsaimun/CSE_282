/*Write a C++ program to find the length of a singly linked list.*/

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
int LinkedListLength(Node* head)
{
    int length = 0;
    Node* current = head;
    while (current!= NULL)
    {
        length++;
        current = current->next;
    }
    return length;
}

int main()
{
    int arr[8] = {2,4,5,6};
    Node *head = constructLL(arr,4);
    int length = LinkedListLength(head);
    cout<<"Length of the singly linked list: "<<length<<endl;

}
