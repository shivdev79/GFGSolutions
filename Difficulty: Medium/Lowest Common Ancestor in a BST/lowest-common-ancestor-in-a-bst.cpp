/* Structure of a Binary Search Tree node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    Node* findLCA(Node* root, Node* n1, Node* n2) {
        if(root == NULL){
            return NULL;
        }
        if(root -> data == n1 -> data || root -> data == n2 -> data){
            return root;
        }
        Node* left =  findLCA(root -> left  , n1 , n2);
        Node* right = findLCA(root -> right , n1 , n2);
        if( left != NULL && right == NULL){
            return left;
        }
        if(left == NULL && right != NULL){
            return right;
        }
        if(left != NULL && right != NULL){
            return root;
        }
        
    }
};