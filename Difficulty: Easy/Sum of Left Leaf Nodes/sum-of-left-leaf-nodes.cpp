/* Definition for Node
class Node {
public:
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
    int leftLeavesSum(Node *root) {
        if(root == NULL){
            return 0;
        }
        int sum = 0;
        if(root -> left && root -> left -> left == NULL && root -> left-> right == NULL){
          sum = sum + root -> left ->data;  
        }
        sum = sum + leftLeavesSum(root -> left);
        sum = sum + leftLeavesSum(root -> right);
        return sum;
    }
};