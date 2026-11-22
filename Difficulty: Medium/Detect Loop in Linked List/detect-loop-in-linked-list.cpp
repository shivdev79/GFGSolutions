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
        map <Node* , bool > visited;
        Node* temp = head;
        while( temp != NULL){
            if(visited[temp] == true){
                return true;
            }
            visited[temp] = true;
            temp = temp -> next;
        }
        return false;
    }
};