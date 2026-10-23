/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* intersectPoint(Node* head1, Node* head2) {
        if(head1 == NULL || head2 == NULL){
            return NULL;
        }
        Node* temp = head1;
        map<Node* , bool> mpp1;
        while(temp != NULL){
            mpp1[temp] = true;
            temp = temp -> next;
        }
        Node* temp2 = head2;
        while(temp2 != NULL){
            if(mpp1[temp2] == true){
                return temp2;
            }
            mpp1[temp2] = true;
            temp2 = temp2 -> next;
            
        }
        return NULL;
    }
};