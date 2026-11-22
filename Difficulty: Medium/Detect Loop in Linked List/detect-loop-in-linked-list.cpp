/* Linked List Node Structure
class Node {
   public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
} */

class Solution {
  public:
    bool detectLoop(Node* head) {
        Node* fast = head;
        Node* slow = head;
        while(fast != NULL && fast -> next != NULL){
            slow = slow -> next ;
            fast = fast -> next -> next;
            if(slow == fast){
                return true;
            }
        }
        return false;
    }
};