/* Structure of a Binary Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    int kthLargest(Node *root, int k) {
        vector <int> ans;
        inorder(root , ans);
        int n = ans.size();
        int z = ans[n-k];
        return z;
    }
    void inorder(Node* root , vector <int> &ans){
        if(root == NULL){
            return ;
        }
        inorder(root -> left , ans);
        ans.push_back(root -> data);
        inorder(root -> right , ans);
    }
};