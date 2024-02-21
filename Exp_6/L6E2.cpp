/* Write a C++ program to check whether the following tree is balanced.

        50
       /  \
      17   72
     /  \  / \
    12  23 54 76
   /  \  \   \
  9   14  19  67

*/

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
        left = nullptr;
        right = nullptr;
    }
};

int maxDepth(Node *root)
{
    if (root == nullptr)
    {
        return 0;
    }

    int lh = maxDepth(root->left);
    if (lh == -1)
    {
        return -1;
    }

    int rh = maxDepth(root->right);
    if (rh == -1)
    {
        return -1;
    }
    if (abs(lh - rh) > 1)
    {
        return -1;
    }

    return 1 + max(lh, rh);
}

bool isbalanced(Node *root)
{
    return maxDepth(root) != -1;
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
    
    int h = isbalanced(root);
    
    if (h == 0)
    {
        cout << "The tree is not balanced";
    }
    else
    {
        cout << "The tree is balanced";
    }
}