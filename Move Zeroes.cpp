/* Structure of linked list Node
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
    void moveZeroes(Node*& head) {
        vector <int> ans;
        Node* temp = head;
        while(temp != NULL){
            if(temp -> data == 0){
                ans.push_back(temp -> data);
            }
            temp = temp -> next;
        }
        temp = head;
        while(temp != NULL){
            if(temp -> data != 0){
                ans.push_back(temp -> data);
            }
            temp = temp -> next;
        }
        int n = ans.size();
        temp = head;
        for(int i = 0 ; i < n ; i++){
            temp -> data = ans[i];
            temp = temp -> next;
        }
    }
};