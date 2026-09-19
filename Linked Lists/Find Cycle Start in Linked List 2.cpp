/*
class Node {
public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int cycleStart(Node* head) {
        Node* fast = head;
        Node* slow = head;
        while(fast != NULL && fast -> next != NULL){
            
            slow = slow -> next;
            fast = fast -> next -> next;
            if(slow == fast){
                return getcycle(head , slow , fast);
            }
        }
        return -1;
    }
    int getcycle(Node* head , Node* slow , Node* fast){
        slow = head;
        while(slow != fast){
            slow = slow -> next;
            fast = fast -> next;
            
        }
        return slow -> data;
    }
};