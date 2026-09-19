/*Structure of the node of the binary tree is as
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
*/
// function should return the sum of all
// left leaf nodes
class Solution {
  public:
    int leftLeavesSum(Node *root) {
        int sum = 0;
        
        solve(root , sum);
        return sum;
    }
    void solve(Node * root , int &sum){
        if(root == NULL){
            return ;
        }
        if(root -> left && root -> left -> left == NULL && root -> left -> right == NULL){
            sum = sum + root -> left -> data;
        }
        solve(root -> left , sum);
        solve(root -> right , sum);
    }
};