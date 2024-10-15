#include <iostream>
using namespace std;
class Node {
public:
int data;
Node* next;
Node(int data) {
this->data = data;
this->next = nullptr;
}
};
void insertAtEnd(Node*& head, int data) {
Node* newNode = new Node(data);
if (head == nullptr) {
head = newNode;
return;
}
Node* temp = head;
while (temp->next != nullptr) {
temp = temp->next;
}
temp->next = newNode;
}
void printList(Node* head) {
Node* temp = head;
while (temp != nullptr) {
cout << temp->data << " -> ";
temp = temp->next;
}
cout << "NULL" << endl;
}
void createLinkedList(Node*& head, int n) {
cout << "Enter " << n << " elements for the linked list:" << endl;
for (int i = 0; i < n; ++i) {
int data;
cin >> data;
insertAtEnd(head, data);
}
}
int main() {
Node* head = nullptr;
int n;
cout << "Enter the number of elements in the linked list: ";
cin >> n;
createLinkedList(head, n);
cout << "Initial linked list:" << endl;
printList(head);
int newElement;
cout << "Enter the new element to insert at the end: ";
cin >> newElement;
insertAtEnd(head, newElement);
cout << "Updated linked list:" << endl;
printList(head);
return 0;
}