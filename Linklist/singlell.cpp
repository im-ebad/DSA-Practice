#include <bits/stdc++.h>

using namespace std;

class Node {
public:
  int data;
  Node *next;
  Node(int data) {
    this->data = data;
    this->next = NULL;
  }
  // ~Node(){
  // 	delete next;
  // 	this->next=NULL;
  // }
};

void traverseItr(Node *head) {
  Node *temp = head;
  if (temp == NULL)
    cout << "Empty LinkList.";
  else {
    while (temp != NULL) {
      cout << temp->data << "->";
      temp = temp->next;
    }
  }
  cout << endl;
}

int traverse(Node *head) {
  if (head == NULL)
    return 0;
  return traverse(head->next) + 1;
}

void insertAtHead(Node *&head, int data) {
  Node *temp = new Node(data);
  temp->next = head;
  head = temp;
}

void deleteFromHead(Node *&head) {
  Node *temp = head;
  head = head->next;
  delete temp;
}

void deleteFromTail(Node *&head) {
  Node *curr = head;
  Node *prev = NULL;
  while (curr->next != NULL) {
    prev = curr;
    curr = curr->next;
  }
  prev->next = NULL;
  delete curr;
}

void deleteFromMiddle(Node *&head, int pos) {
  if (pos == 1) {
    deleteFromHead(head);
    return;
  }
  Node *curr = head;
  Node *prev = NULL;
  int count = 1;
  while (count < pos) {
    prev = curr;
    curr = curr->next;
    count++;
  }
  if (curr->next == NULL) {
    deleteFromTail(head);
    return;
  }
  prev->next = curr->next;
  delete curr;
}

void insertAtTail(Node *&head, int data) {
  Node *temp = head;
  while (temp->next != NULL) {
    temp = temp->next;
  }
  Node *newnode = new Node(data);
  temp->next = newnode;
}

void insertAtMiddle(Node *&head, int pos, int data) {
  if (pos == 1) {
    insertAtHead(head, data);
    return;
  }
  Node *temp = head;
  int count = 1;
  while (count < pos - 1) {
    temp = temp->next;
    count++;
  }
  if (temp->next == NULL) {
    insertAtTail(head, data);
    return;
  }
  Node *newnode = new Node(data);
  newnode->next = temp->next;
  temp->next = newnode;
}
Node *reverseList(Node *head) {
  Node *prev = NULL;
  Node *crr = head;
  Node *next = NULL;
  while (crr) {
    next = crr->next;
    crr->next = prev;
    prev = crr;
    crr = next;
  }
  return prev;
}
Node *revList(Node *head) {
  if (!head || !head->next)
    return head;
  Node *newHead = revList(head->next);
  head->next->next = head;
  head->next = NULL;
  return newHead;
}
bool isCirular(Node *head) {
  if (!head || !head->next)
    return false;
  Node *temp = head->next;
  while (temp && temp != head)
    temp = temp->next;
  return temp == head;
}

int main() {

  Node *head = new Node(50);
  insertAtHead(head, 40);
  insertAtHead(head, 30);
  insertAtHead(head, 20);
  insertAtHead(head, 10);
  insertAtHead(head, 0);
  traverse(head);
  cout << endl;
  deleteFromHead(head);
  traverse(head);
  cout << endl;
  deleteFromTail(head);
  traverse(head);
  cout << endl;
  insertAtTail(head, 50);
  traverse(head);
  cout << endl;
  insertAtMiddle(head, 6, 11);
  traverse(head);
  cout << endl;
  deleteFromMiddle(head, 6);
  traverse(head);
  cout << endl;
  head = reverseList(head);
  cout << endl << "Reverse List: ";
  traverse(head);
  head = revList(head);
  cout << endl << "Reverse List Recursivley: ";
  traverse(head);
  bool circular = isCirular(head);
  circular ? cout << "List is circular" : cout << "List is not circular";
}
