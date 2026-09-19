/* Structure of a Linked List Node
class Node {
  public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};*/ 

class Solution {
  public:
    Node* insertAtBeginning(Node* tail, int key) {
        Node* n1 = new Node(key);
        Node* prev = tail -> next;
        tail -> next = n1;
        n1 -> next = prev;
        Node* head = n1;
        return head;
        
    }
};