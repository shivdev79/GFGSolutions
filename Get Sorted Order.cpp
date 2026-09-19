/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> getSortedOrder(Node* root) {
        vector <int> ans;
        inorder(root ,ans);
        return ans;
    }
    void inorder(Node* root , vector <int> &ans){
        if(root == NULL){
            return;
        }
        inorder(root -> left , ans);
        ans.push_back(root -> data);
        inorder(root -> right , ans);
    }
};