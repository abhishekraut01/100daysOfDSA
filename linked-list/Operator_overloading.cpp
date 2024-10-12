// Operator overloading is used to give additional meanings to operators for user-defined data types, enhancing code readability and flexibility. It is needed when we want to apply operators like << to objects in a way that is meaningful to the user-defined type.

#include<iostream>
using namespace std;

// Create node for linked list
struct Node
{
    int data;
    Node* next;

    // Constructor to initialize node data
    Node(int x){
        data = x;
        next = nullptr;
    }

    //A friend function is used to access private or protected members of a class, and passing the ostream by reference avoids creating a copy, which improves performance.

    //operator overloading function for node 
    friend ostream& operator<<(ostream& os, const Node& node){
        os << "Node Data is " << node.data << endl;

        if(node.next != nullptr){
            os << "next:" << node.next << endl;
        }else{
            os << "next:" << "NullPtr" << endl;
        }
        return os;
    }
};

int main()
{
    // Create linked list
    Node *head = new Node(1);   // Initialize head node with data = 1
    Node *second = new Node(2); // Initialize second node with data = 2
    Node *third = new Node(3);  // Initialize third node with data = 3

    // Link nodes together
    head->next = second;
    second->next = third;
    third->next = nullptr;

    // Display linked list using overloaded << operator
    cout << *head << endl;
    cout << *second << endl;
    cout << *third << endl;

    return 0;
}
