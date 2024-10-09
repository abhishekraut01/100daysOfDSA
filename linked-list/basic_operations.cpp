#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Function to print linked list
void printList(Node* n) {
    while (n != nullptr) {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

// Insert at beginning
void insertAtBeginning(Node** head_ref, int new_data) {
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

// Insert at end
void insertAtEnd(Node* head, int new_data) {
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = nullptr;

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = new_node;
}

// Insert after a given node
void insertAfter(Node* prev_node, int new_data) {
    if (prev_node == nullptr) {
        cout << "The previous node cannot be null." << endl;
        return;
    }

    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

int main() {
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->data = 1;
    second->data = 2;
    third->data = 3;

    head->next = second;
    second->next = third;
    third->next = nullptr;

    printList(head); // Output: 1 2 3

    insertAtBeginning(&head, 0);
    printList(head); // Output: 0 1 2 3

    insertAtEnd(head, 4);
    printList(head); // Output: 0 1 2 3 4

    insertAfter(second, 5);
    printList(head); // Output: 0 1 5 2 3 4

    return 0;
}
