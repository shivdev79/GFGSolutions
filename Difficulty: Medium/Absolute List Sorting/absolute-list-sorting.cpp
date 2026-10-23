/* Linked List Node
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
    Node* sortList(Node* head) {
        vector <int> ans;
        Node* temp = head;
        while(temp != NULL){
            ans.push_back(temp -> data);
            temp = temp -> next;
        }
        sort(ans.begin() , ans.end());
        Node* temp1 = new Node(ans[0]);
        Node* move = temp1;
        for(int i = 1; i < ans.size() ; i++){
            Node* n1 = new Node(ans[i]);
            move -> next = n1;
            move = n1;
        }
        return temp1;
    }
};