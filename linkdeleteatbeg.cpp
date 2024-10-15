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
void deleteFirst(Node*& head) {
if (head == nullptr) {
cout << "The list is empty. No node to delete." << endl;
return;
}
Node* temp = head;
head = head->next;
delete temp;
cout << "First element deleted." << endl;
}
void printList(Node* head) {
Node* temp = head;
while (temp != nullptr) {
cout << temp->data << " -> ";
temp = temp->next;
}
cout << "NULL" << endl;
}
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
int main() {
Node* head = nullptr;
insertAtEnd(head, 10);
insertAtEnd(head, 20);
insertAtEnd(head, 30);
cout << "Initial linked list:" << endl;
printList(head);
deleteFirst(head);
cout << "Linked list after deleting the first element:" << endl;
printList(head);
return 0;
}