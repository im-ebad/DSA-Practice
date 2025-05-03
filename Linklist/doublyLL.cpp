#include <bits/stdc++.h>
using namespace std;
class Node{
public:
	int data;
	Node* next;
	Node* prev;
	Node(int data){
		this->data=data;
		this->prev=NULL;
		this->next=NULL;
	}
};
void traverse(Node* head){
	if(head==NULL)return;
	cout<<head->data<<"->";
	traverse(head->next);
}
void insertAtHead(Node* &head,Node* tail,int data){
	Node* temp=new Node(data);
	if(head == NULL){
		head=temp;
		tail=temp;
		return;
	}
	head->prev=temp;
	temp->next=head;
	head=temp;
}
void deleteFromHead(Node* &head){
	Node *temp=head;
	head=head->next;
	head->prev=NULL;
	delete temp;
}
void deleteFromTail(Node* &tail){
	Node* temp=tail;
	tail=tail->prev;
	tail->next=NULL;
	delete temp;
}
void deleteFromMiddle(Node* &head,Node* &tail,int pos){
	if(pos==1){
		deleteFromHead(head);
		return;
	}
	Node* curr=head;
	int count=1;
	while (count<pos){
		curr=curr->next;
		count++;
	}
	if(curr->next==NULL){
		deleteFromTail(tail);
		return;
	}
	curr->next->prev=curr->prev;
	curr->prev->next=curr->next;
	delete curr;
}
void insertAtTail(Node* &head,Node* &tail,int data){
	Node* newNode=new Node(data);
	if(tail==NULL){
		tail=newNode;
		head=newNode;
		return;
	}
	tail->next=newNode;
	newNode->prev=tail;
	tail=newNode;
}
void insertAtMiddle(Node* &head,Node * &tail,int pos,int data){
	if(pos==1){
		insertAtHead(head,tail,data);
		return;
	}
	Node* temp=head;
	int count=1;
	while (count<pos-1){
		temp=temp->next;
		count++;
	}
	if(temp->next==NULL){
		insertAtTail(head,tail,data);
		return;
	}
	Node* newNode=new Node(data);
	newNode->next=temp->next;
	newNode->prev=temp;
	temp->next->prev=newNode;
	temp->next=newNode;

}
int main(){
	Node* newNode=new Node(50);
	Node* head=newNode;
	Node* tail=newNode;
	insertAtHead(head,tail,40);
	// insertAtHead(head,20);
	// insertAtHead(head,10);
	// insertAtHead(head,0);
	traverse(head);
	// cout<<endl;
	// traverse(head);
	// cout<<endl;
	// traverse(head);
	cout<<endl;
	// insertAtTail(head,50);
	insertAtMiddle(head,tail,3,11);
	traverse(head);
	cout<<endl;
	// traverse(head);
	deleteFromMiddle(head,tail,3);
	traverse(head);
	cout<<endl;
	deleteFromHead(head);
	insertAtHead(head,tail,40);
		    deleteFromTail(tail);
	traverse(head);
}






