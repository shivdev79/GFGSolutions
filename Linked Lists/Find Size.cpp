/*
class Node {
  public:

    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = nullptr;
        prev = nullptr;
    }
};
*/
class Solution {
  public:
    int findSize(Node *head) {
        Node* temp =head;
        int cnt = 0;
        while(temp != NULL){
            cnt = cnt + 1;
            temp = temp -> next;
        }
        return cnt;
    }
};