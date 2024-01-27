#include<iostream>
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

Node* DeleteKthNode(Node *head,int k)
{
    Node *temp=head,*prev=NULL,*fr=NULL;
    int cnt=0;
    while(temp!=NULL)
    {
        cnt++;
        if(cnt==k)
        {
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    fr=temp->next;
    prev->next=fr;
    delete temp;
    return head;
}
