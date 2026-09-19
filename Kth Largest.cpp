/*The Node structure is defined as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// return the Kth largest element in the given BST rooted at 'root'
class Solution {
  public:
    int kthLargest(Node *root, int k) {
        vector <int> ans;
        inorder(root , ans);
        int n = ans.size();
        sort(ans.begin() , ans.end());
        int x = ans[n-k];
        return x;
        
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