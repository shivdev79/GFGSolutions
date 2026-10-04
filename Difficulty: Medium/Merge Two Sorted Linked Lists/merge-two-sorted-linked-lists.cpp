/*  Structure of Linked List Node
class Node {
 public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    Node* sortedMerge(Node* head1, Node* head2) {
        vector <int> store;
        Node* temp1 = head1;
        while(temp1 != NULL){
            store.push_back(temp1 -> data);
            temp1 = temp1 -> next;
        }
        Node* temp2 = head2;
        while(temp2 != NULL){
            store.push_back(temp2 -> data);
            temp2 = temp2 -> next;
        }
        sort(store.begin() , store.end());
        Node* n1 = new Node(store[0]);
        Node* move = n1;
        for(int i = 1 ; i < store.size() ; i++){
            Node* new1 = new Node(store[i]);
            move -> next = new1;
            move = new1;
        }
        return n1;
    }
    
};