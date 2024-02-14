/*C++ program to find the Inorder, Preorder, and Postorder traversals*/


#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};

void InOrderTraversal(Node *temp)
{
    if (temp == NULL)
    {
        return;
    }

    InOrderTraversal(temp->left);
    cout << temp->data << " ";
    InOrderTraversal(temp->right);
}

void PreOrderTraversal(Node *temp)
{
    if (temp == NULL)
    {
        return;
    }

    cout << temp->data << " ";
    PreOrderTraversal(temp->left);
    PreOrderTraversal(temp->right);
}

void PostOrderTraversal(Node *temp)
{
    if (temp == NULL)
    {
        return;
    }

    PostOrderTraversal(temp->left);
    PostOrderTraversal(temp->right);
    cout << temp->data << " ";
}

int main()
{
    Node *root = new Node(50);
    root->left = new Node(17);
    root->right = new Node(72);
    root->left->left = new Node(12);
    root->left->right = new Node(23);
    root->right->left = new Node(54);
    root->right->right = new Node(76);
    root->left->left->left = new Node(9);
    root->left->left->right = new Node(14);
    root->left->right->right = new Node(19);
    root->right->left->right = new Node(67);

    cout<<"Tree 1:\n"<<endl;

    cout << "InOrder Traversal: " << endl;
    InOrderTraversal(root);
    cout<<endl;

    cout << "\nPreOrder Traversal: " << endl;
    PreOrderTraversal(root);
    cout<<endl;

    cout << "\nPostOrder Traversal: " << endl;
    PostOrderTraversal(root);
}
