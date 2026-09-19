/*
class Node {
   public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
} */

class Solution {
  public:
    bool detectLoop(Node* head) {
        map <Node* , int> visited;
        Node* temp = head;
        while(temp != NULL){
            if(visited[temp] == true){
                return temp;
            }
            visited[temp] = true;
            temp = temp -> next;
        }
        return NULL;
    }
};