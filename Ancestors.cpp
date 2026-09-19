/*
Structure of a node is as following
struct Node
{
     int data;
     struct Node* left;
     struct Node* right;
};
*/

class Solution {
  public:
    vector<int> Ancestors(struct Node *root, int target) {
    vector<int> ans;
    solve(root, ans, target);
    if (!ans.empty()) ans.pop_back(); 
    reverse(ans.begin(), ans.end());  
    return ans;
}


    bool solve(struct Node *root, vector<int> &ans, int target) {
        if (root == NULL) {
            return false;
        }
        ans.push_back(root->data);
        if (root->data == target) {
            return true;
        }
        if (solve(root->left, ans, target) ||
            solve(root->right, ans, target)) {
            return true;
        }
        ans.pop_back(); 
        return false;
    }
};