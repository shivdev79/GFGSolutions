/* Structure of linked list Node
class Node {
public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};*/
class Solution {
  public:
    Node* removeDuplicates(Node* head) {
        vector <int> ans;
        Node* temp = head;
        while(temp != NULL){
            ans.push_back(temp -> data);
            temp = temp -> next;
        }
        map <int, int> mpp;
        vector <int> final;
        for(auto it : ans){
            if(mpp[it] == 0){
                final.push_back(it);
                mpp[it] = 1;
            }
        }
        int n = final.size();
        if(n == 0){
            return NULL;
        }
        Node* n1 = new Node(final[0]);
        Node* move = n1;
        for(int i = 1; i < n ; i++){
            Node* new1 = new Node(final[i]);
            move -> next = new1;
            move = new1;
        }
        return n1;
    }
};















