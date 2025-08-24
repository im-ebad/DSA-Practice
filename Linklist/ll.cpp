#include <bits/stdc++.h>

using namespace std;
struct Node {
  int data;
  struct Node *next;
  Node(int value) {
    data = value;
    next = nullptr;
  }
};

int main() {
  struct Node *temp = new Node(10);
  temp->next = new Node(20);
  temp->next->next = new Node(30);
  cout << temp->data << endl;
  cout << temp->next->data << endl;
  cout << temp->next->next->data << endl;
  return 0;
}
