/*
class Node {
public:
    int data;
    Node *left, *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    bool isSymmetric(Node* root) {
        if(root == NULL){
            return true;
        }
        return ismirror(root -> left , root -> right);    
        
    }
    bool ismirror(Node* a, Node* b){
        if( a == NULL && b == NULL){
            return true;
        }
        if(a== NULL || b == NULL){
            return false;
        }
        return (a-> data == b -> data) && ismirror( a -> left , b-> right) && ismirror(a-> left , b -> right);
        
    }
};