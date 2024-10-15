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
void deleteAfter(Node* head, int target) {
Node* current = head;
while (current != nullptr && current->data != target) {
current = current->next;
}
if (current != nullptr && current->next != nullptr) {
Node* nodeToDelete = current->next;
current->next = nodeToDelete->next;
delete nodeToDelete; 
cout << "Deleted element after " << target << "." << endl;
} else {
cout << "No element found after " << target << " to delete or target not found." << endl;
}
}
void printList(Node* head) {
Node* temp = head;
while (temp != nullptr) {
cout << temp->data << " -> ";
temp = temp->next;
}
cout << "NULL" << endl;
}
int main() {
Node* head = nullptr;
insertAtEnd(head, 10);
insertAtEnd(head, 20);
insertAtEnd(head, 30);
insertAtEnd(head, 40);
cout << "Initial linked list:" << endl;
printList(head);
int target = 20;
deleteAfter(head, target);
cout << "Linked list after deletion:" << endl;
printList(head);
return 0;
}