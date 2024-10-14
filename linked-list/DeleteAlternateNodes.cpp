#include<iostream>
#include<vector>
using namespace std;

class Node {
    public:
        int data;
        Node *next;

    Node(int x){
        data = x;
        next = nullptr;
    }
};

class CreateLinkedList{
    public:
            Node* createLinkedListFromArray(vector<int> arr){
                int n = arr.size();
                Node* head = new Node(arr[0]);
                Node* temp = head;

                for(int i = 1; i<n; i++){
                    Node* newNode = new Node(arr[i]);
                    temp->next = newNode;
                    temp = newNode;
                }
                return head;
            }
};


class Solution {
  public:
    void deleteAlt(Node *head) {
        
        Node* temp = head;
        while(temp && temp->next){
            Node* NodeToDelete = temp -> next;
            temp -> next = temp -> next -> next;
            free(NodeToDelete);
            temp = temp ->next;
        }
    }
};

void printLinkedList(Node* head){
    Node* temp = head;
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }
};


int main()
{
    vector<int>arr = {1,2,3,4,5};
    CreateLinkedList obj;
    Node* head = obj.createLinkedListFromArray(arr);
    printLinkedList(head);
    cout << endl;
    Solution deleteAlternateNode;
    deleteAlternateNode.deleteAlt(head);
    printLinkedList(head);
    return 0;
}