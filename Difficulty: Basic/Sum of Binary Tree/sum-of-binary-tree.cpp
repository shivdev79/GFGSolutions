/* Tree Node Structure
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
    int sumBT(Node* root) {
        if(root == NULL){
            return 0;
        }
        int sum = 0;
        sum = sum + root -> data;
        sum = sum + sumBT(root -> left);
        sum = sum + sumBT(root -> right);
        return sum;
    }
};