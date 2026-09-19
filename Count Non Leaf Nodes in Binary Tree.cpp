/*Structure of the node of the tree is as
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
*/
// you are required to complete this function
// the function should return the count of Non-Leaf Nodes
class Solution {
  public:
    int countNonLeafNodes(Node* root) {
        if(root == NULL){
            return 0;
        }
        int count = 1;
        count = count + countNonLeafNodes(root -> left);
        count = count + countNonLeafNodes(root -> right);
        if(root -> left == NULL && root -> right == NULL){
            count--;
            
        }
        return count;
        
    }
};