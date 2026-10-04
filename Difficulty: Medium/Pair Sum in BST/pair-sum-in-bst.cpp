/* Binary Tree Node Structure
class Node {
    int data;
    Node *left;
    Node *right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    bool findTarget(Node *root, int target) {
        if(root == NULL){
            return false;
        }
        vector <int> ans;
        inorder(root , ans);
        int n = ans.size();
        int i = 0;
        int j = n - 1;
        while(i  < j){
            int sum = ans[i] + ans[j];
            if(sum == target){
                return true;
            }
            else if( sum < target){
                i++;
            }
            else{
                j--;
            }
        }
        return false;
        
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