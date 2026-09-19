/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    int nodeSum(Node* root, int l, int r) {
        vector <int> ans;
        inorder(root , ans);
        int sum = 0;
        for(int i = 0 ; i < ans.size() ; i++){
            if(ans[i] >= l && ans[i] <= r){
                sum = sum + ans[i];
            }
        }
        return sum;
    }
    void inorder(Node* root , vector <int> &ans){
        if(root == NULL){
            return ;
        }
        inorder(root -> left, ans);
        ans.push_back(root -> data);
        inorder(root -> right ,ans);
    }
};