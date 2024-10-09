#include <iostream>
#include <vector>
using namespace std;

// Define the structure of a Node
struct Node {
    int data;
    Node* right;
    Node* down;

    Node(int x) {
        data = x;
        right = nullptr;
        down = nullptr;
    }
};

// Function to create a 2D linked list from a 2D vector
Node* create2DLinkedList(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    if (rows == 0) return nullptr;
    int cols = matrix[0].size();

    // Create a 2D vector to store the pointers to the nodes
    vector<vector<Node*>> nodeMatrix(rows, vector<Node*>(cols, nullptr));

    // Create nodes and populate the nodeMatrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            nodeMatrix[i][j] = new Node(matrix[i][j]); // Create a new node with matrix value
        }
    }

    // Link nodes using 'right' and 'down' pointers
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (j + 1 < cols) {
                nodeMatrix[i][j]->right = nodeMatrix[i][j + 1]; // Link right
            }
            if (i + 1 < rows) {
                nodeMatrix[i][j]->down = nodeMatrix[i + 1][j]; // Link down
            }
        }
    }

    // Return the head of the 2D linked list (top-left node)
    return nodeMatrix[0][0];
}

// Function to print the 2D linked list (row-wise)
void print2DLinkedList(Node* head) {
    Node* row = head;

    // Traverse down each row
    while (row != nullptr) {
        Node* col = row;

        // Traverse across each column
        while (col != nullptr) {
            cout << col->data << " ";
            col = col->right;
        }
        cout << endl;
        row = row->down; // Move to the next row
    }
}

int main() {
    // Define a 2D matrix
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Create the 2D linked list
    Node* head = create2DLinkedList(matrix);

    // Print the 2D linked list
    print2DLinkedList(head);

    return 0;
}
