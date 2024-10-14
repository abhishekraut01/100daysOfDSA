#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Node{
    public:
        int data;
        Node* next;
        
    public:    
        Node(int newData){
            data = newData;
            next = nullptr;
        }
};

class ArrayToLinkedList{
    public:
        Node* ArrayToLinkedListConvert(vector<int> arr){
            int n = arr.size();
            Node* head = new Node(arr[0]); 
            Node* temp = head;
            
            for(int i=1; i<n; i++){
                Node* NewNode = new Node(arr[i]);
                temp-> next = NewNode;
                temp = NewNode;
            }
            return head;
        }
};

void insertAtBegining(Node **head_ref , int data){
    
}

// void insertAtLast(Node *head , int data){
    
// } 

// void insertBeforeGivenNode(Node *GivenNode , int data){
    
// }

// void insertAfterGivenNode(Node *GivenNode , int data){
    
// }

void printLinkedList(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << endl;
        temp = temp->next;
    }
}

// void PrintLinkedListLength{
    
// }

// void DeteteNodeAtEnd(Node* head){
    
// }


// void DeteteNodeAtBegining(Node* head){
    
// }

// void DeteteNodeAtKposition(Node* head){
    
// }

int main() {
    vector<int> arr = {3,2,7,4,6,8};
    ArrayToLinkedList solution;
    Node* ArrayToLinkedListHead = solution.ArrayToLinkedListConvert(arr);
    printLinkedList(ArrayToLinkedListHead);
    return 0;
}