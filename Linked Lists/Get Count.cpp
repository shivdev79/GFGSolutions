/* Structure of linked list Node
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    int getCount(Node* head) {
        if(head == NULL){
            return NULL;
        }
        int cnt = 0;
        Node* temp = head;
        while( temp != NULL){
            cnt = cnt + 1;
            temp = temp -> next;
        }
        return cnt;
    }
};