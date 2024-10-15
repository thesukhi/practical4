#include <iostream>
using namespace std;
Class Node{
public:
int data;
Node* next;
Node(int data) {
this->data = data;
this->next = nullptr;
}
};
void deleteLast(Node*& head) {
if (head == nullptr) {
cout << "The list is empty. No node to delete." << endl;
return;
}
if (head->next == nullptr) {
delete head;
head = nullptr;
cout << "Last element deleted. List is now empty." << endl;
return;
}
Node* temp = head;
while (temp->next->next != nullptr) {
temp = temp->next;
}
delete temp->next;
temp->next = nullptr;
cout << "Last element deleted." << endl;
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
deleteLast(head);
cout << "Linked list after deleting the last element:" << endl;
printList(head);
return 0;
}
