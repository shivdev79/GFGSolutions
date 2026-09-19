/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// Function to return a list containing the level order traversal in spiral form.
class Solution {
  public:
    int leafSum(Node* root) {
        int sum = 0;
        
        return data(root ,sum);
    }
    int data(Node*root , int &sum){
         if(root == NULL){
            return 0;
        }
        
        if(root ->  left == NULL && root -> right == NULL){
            sum = sum + root -> data;
        }
        data(root -> left, sum);
        data(root -> right, sum);
        return sum;
    }
};