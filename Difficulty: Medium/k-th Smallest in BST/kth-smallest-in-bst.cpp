/*
Definition for Node
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
    int kthSmallest(Node *root, int k) {
        vector <int> ans;
       
       
        inorder(root , ans);
         if(k > ans.size()) return -1;
         
        int z = ans[k-1];
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