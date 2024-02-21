/* Write a C++ program to find the height of the following tree
        
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
  int rh = maxDepth(root->right);

  return 1 + max(lh, rh);
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

  int height = maxDepth(root);
  cout << "Height of the tree = " << height;
}