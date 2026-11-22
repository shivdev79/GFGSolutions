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
        map <Node* , bool> visited;
        Node* temp = head;
        while(temp != NULL){
            if(visited[temp] == true){
                return temp -> data;
            }
            visited[temp] = true;
            temp = temp -> next;
        }
        return -1;
    }
};