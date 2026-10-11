/* Structure of binary tree Node 
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
    int diameter(Node* root) {
        int result = INT_MIN;
        solve(root , result);
        return result;
    }
    int solve(Node* root , int &result){
        if(root == NULL){
            return 0;
        }
        int left = solve(root -> left , result);
        int right = solve(root -> right , result);
        int temp = max(left , right) + 1;
        int ans = left + right;
        result = max(result , ans);
        return temp;
        
    }
};