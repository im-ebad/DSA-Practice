#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node *next;
  struct Node *prev;
} Node;

Node *createNode(int item) {
  Node *temp = (Node *)malloc(sizeof(Node));
  temp->data = item;
  temp->next = NULL;
  temp->prev = NULL;
  return temp;
}
int main() {
  Node *one = createNode(10);
  Node *two = createNode(20);
  Node *three = createNode(30);
  one->next = two;
  two->prev = one;
  two->next = three;
  three->prev = two;
  Node *head = three;
  while (head != NULL) {
    printf("%d\n", head->data);
    head = head->prev;
  }
  return 0;
}
