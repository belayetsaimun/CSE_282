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
    Node* root = new Node (1);
    root -> left = new Node (3);
    root -> left -> left = new Node (5);
    root -> left -> left -> right = new Node (4);
    root -> left -> left -> right -> right = new Node (11);
    root -> left -> right = new Node (2);
    root -> left -> right -> left = new Node (7);
    root -> left -> right -> left -> right = new Node (9);
    root -> left -> right -> right = new Node (8);
    root -> left -> right -> right -> right = new Node (13);
    root -> left -> right -> right -> right -> right = new Node (12);

    cout<<"Tree 2:\n";
    cout << endl;


    cout << "InOrder Traversal: " << endl;
    InOrderTraversal(root);
    cout << endl;

    cout << "\nPreOrder Traversal: " << endl;
    PreOrderTraversal(root);
    cout << endl;

    cout << "\nPostOrder Traversal: " << endl;
    PostOrderTraversal(root);
}
