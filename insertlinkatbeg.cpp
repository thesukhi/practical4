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
void insertAtBeginning(Node*& head, int data) {
Node* node1 = new Node(data);
node1->next = head;
head = node1;
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
insertAtBeginning(head, data);
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
cout << "Enter the new element to insert at the beginning: ";
cin >> newElement;
insertAtBeginning(head, newElement);
cout << "Updated linked list:" << endl;
printList(head);
return 0;
}