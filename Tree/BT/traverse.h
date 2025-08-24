#ifndef TRAVERSE_H
#define TRAVERSE_H

struct TreeNode {
  int data;
  TreeNode *left, *right;
  TreeNode(int data);
};

void inorderTraverse(TreeNode *root);
void preorderTraverse(TreeNode *root);
void postorderTraverse(TreeNode *root);
void levelorderTraverse(TreeNode *root);
void levelorderRec(TreeNode *root);

#endif
