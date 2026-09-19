/* Structure of linked list Node
class Node {
  public:
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = nullptr;
    }
};*/
class Solution {
  public:
    Node* insertIntoEmpty(Node* last, int data) {
        if(last == NULL){
            Node* n1 = new Node(data);
            n1 -> next = n1;
            return n1;
        }
        
    }
};