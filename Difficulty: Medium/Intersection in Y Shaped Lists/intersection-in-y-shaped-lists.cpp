/* Structure of Linked List Node
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};*/

class Solution {
  public:
    Node* intersectPoint(Node* head1, Node* head2) {
        map <Node* , bool> mpp;
        Node*temp1 = head1;
        while(temp1 != NULL){
            mpp[temp1] = true;
            temp1 = temp1 -> next;
        }
        Node* temp2 = head2;
        while(temp2 != NULL){
            if(mpp.find(temp2) != mpp.end()){
                return temp2;
            }
            temp2 = temp2 -> next;
        }
        return NULL;
        
    }
};