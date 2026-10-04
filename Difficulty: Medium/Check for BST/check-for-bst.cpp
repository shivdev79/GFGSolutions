/* Structure of a Binary Search Tree node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
    bool isBST(Node* root) {
        if(root == NULL){
            return false;
            
        }
        vector <int> ans;
        inorder(root , ans);
        for(int i = 1 ; i < ans.size() ; i++){
            if(ans[i] <= ans[i-1]){
                return false;
            }
        }
        return true;
    }
    void inorder(Node* root , vector <int> &ans){
        if(root == NULL){
            return ;
        }
        inorder(root -> left  , ans);
        ans.push_back(root -> data);
        inorder(root -> right , ans);
    }
};