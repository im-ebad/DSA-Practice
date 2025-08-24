#include "traverse.h"
#include <bits/stdc++.h>

using namespace std;

TreeNode::TreeNode(int data) : data(data), left(nullptr), right(nullptr) {}

void inorderTraverse(TreeNode *root) {
  if (root == NULL)
    return;
  inorderTraverse(root->left);
  cout << root->data << "->";
  inorderTraverse(root->right);
}

void preorderTraverse(TreeNode *root) {
  if (root == NULL)
    return;
  cout << root->data << "->";
  preorderTraverse(root->left);
  preorderTraverse(root->right);
}

void postorderTraverse(TreeNode *root) {
  if (root == NULL)
    return;
  postorderTraverse(root->left);
  postorderTraverse(root->right);
  cout << root->data << "->";
}

void levelorderTraverse(TreeNode *root) {
  queue<TreeNode *> q;
  q.push(root);

  while (!q.empty()) {
    TreeNode *temp = q.front();
    q.pop();
    cout << temp->data << "->";
    if (temp->left)
      q.push(temp->left);
    if (temp->right)
      q.push(temp->right);
  }
}

void levelOrder(TreeNode *root, int level, vector<vector<int>> &res) {
  if (root == NULL)
    return;
  if (res.size() <= level)
    res.push_back({});
  res[level].push_back(root->data);
  levelOrder(root->left, level + 1, res);
  levelOrder(root->right, level + 1, res);
}

void levelorderRec(TreeNode *root) {
  vector<vector<int>> res;
  levelOrder(root, 0, res);
  for (auto &row : res) {
    for (auto &elem : row) {
      cout << elem << " ";
    }
    cout << endl;
  }
}
