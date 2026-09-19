/*The Node structure is
class Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};*/

class Solution {
  public:
    bool isDeadEnd(Node *root) {
        int lower = 0;
        int upper = INT_MAX;
        bool x = dead(root , lower , upper);
        return x;
        
        
    }
    bool dead(Node* root , int lower , int upper){
        if(root == NULL){
            return false ;
        }
        if(root -> left == NULL && root -> right == NULL){
            if(root -> data  - lower == 1 &&  upper - root -> data == 1){
                return 1;
            }
            else{
                return 0;
            }
            
            
        }
        return dead(root -> left , lower , root -> data) ||dead(root -> right , root -> data , upper);
    }
};