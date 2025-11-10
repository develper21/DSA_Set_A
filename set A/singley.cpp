// Write a program to create a linkedlist and perform insertion
// 1. Insert a node at the begining
// 2. Display the list

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

void insertAtBeg(Node *head, int val) {
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void display(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node *head = NULL;
    insertAtBeg(head, 1);
    insertAtBeg(head, 2);
    insertAtBeg(head, 3);
    display(head);
    return 0;
}
