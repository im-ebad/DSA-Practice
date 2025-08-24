#include "traverse.h"
#include <bits/stdc++.h>

using namespace std;

// struct TreeNode {
//
//   int data;
//   TreeNode *left, *right;
//
//   TreeNode(int data) {
//     this->data = data;
//     left = right = NULL;
//   }
// };

TreeNode *createTree(TreeNode *root) {

  cout << "Enter the data:" << endl;
  int data;
  cin >> data;
  root = new TreeNode(data);

  if (data == -1)
    return NULL;

  cout << "Enter the data for inserting in left of : " << data << endl;
  root->left = createTree(root->left);

  cout << "Enter the data for inserting in right of : " << data << endl;
  root->right = createTree(root->right);

  return root;
}

int main() {

  TreeNode *root;
  root = createTree(root);
  cout << "Inorder Traverse:" << endl;
  inorderTraverse(root);
  cout << endl << "Preorder Traverse:" << endl;
  preorderTraverse(root);
  cout << endl << "Postorder Traverse:" << endl;
  postorderTraverse(root);
  cout << endl << "LevelOrder Traverse:" << endl;
  levelorderTraverse(root);
  cout << endl << "LevelOrder Traverse using Recursion:" << endl;
  levelorderRec(root);
  cout << endl;

  return 0;
}
