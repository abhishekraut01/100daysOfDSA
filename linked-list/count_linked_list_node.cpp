// https://www.geeksforgeeks.org/problems/count-nodes-of-linked-list/0

#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr; 
    }
};

class Solution {
  public:
    // Function to count nodes of a linked list.
    int getCount(struct Node* head) {
        int count = 0;
        
        Node * temp = head;
        while(temp != nullptr){
            temp = temp->next;
            count++;
        }
        
        return count;
    }
};

int main()
{
    Solution ob;
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    
    cout << "Count of nodes in Linked List is " << ob.getCount(head) << endl;
    
    return 0;
}