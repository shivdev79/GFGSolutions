/*
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    void printList(Node* head) {
        Node* temp = head;
        while(temp != NULL){
            cout << temp -> data << " ";
            temp = temp -> next;
        }
    }
};