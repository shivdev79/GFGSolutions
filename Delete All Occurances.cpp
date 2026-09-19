/* Structure of a linked list node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    Node* deleteAllOccurances(Node* head, int x) {
        Node* temp = head;
        vector <int> ans;
        while(temp != NULL){
            if(temp -> data != x){
                ans.push_back(temp -> data);
            }
            temp = temp -> next;
        }
        int n = ans.size();
        if(n == 0){
            return NULL;
        }
        Node* head1 = new Node(ans[0]);
        Node* move = head1;
        for(int i = 1 ; i < ans.size() ; i++){
            Node* n1 = new Node(ans[i]);
            move -> next = n1;
            move = n1;
        }
        return head1;
    }
};