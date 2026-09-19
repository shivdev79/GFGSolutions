/* Structure of circular linked list node
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
    void printList(Node* head) {
        Node* temp = head;
        while( temp != NULL){
            cout << temp -> data << " ";
            if(temp -> next == head){
                break;
            }
            temp = temp -> next;
        }
    }
};