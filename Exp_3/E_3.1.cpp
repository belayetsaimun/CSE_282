/*Write a C++ program to find the position of an element from a Singly
Linked List [Linear Search].*/

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
int LS(Node* head,int x)
{
      Node* current = head;
      int position = 1;
      while (current != NULL)
        {
        if (current->data == x)
        {
          return position;
        }
        current = current->next;
        position++;
      }

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
    cout<<"\n";
    int k=5;
    int position =LS(head,k);
     cout << k<< " is at position " << position << " in the list." << endl;

}
