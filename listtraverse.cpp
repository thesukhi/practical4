#include<iostream>
using namespace std;
class Node
{
public:
int data;
Node* next;
Node(int data)
{
this -> data = data;
this -> next = NULL;
}
};
void insertelements(Node* &head, int data)
{
Node* node1 = new Node(data);
node1 -> next = head;
head = node1;
}
void printlist(Node* &head)
{
Node* temp = head;
while( temp != NULL)
{
cout <<temp -> data << " ";
temp = temp -> next;
}
}
int main()
{
Node* head = NULL;
insertelements(head,30);
insertelements(head,25);
insertelements(head,20);
insertelements(head,15);
printlist(head);
return 0;
}