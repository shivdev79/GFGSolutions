/* Node structure
struct Node
{
    int data;
    Node* left, *right;
}; */

/* Given two trees, should return true if they are
   mirror of each other. */
class Solution {
  public:
    bool areMirror(Node* a, Node* b) {
        if(a == NULL && b == NULL){
            return true;
        }
        if( a != NULL && b == NULL){
            return false;
        }
        if( a == NULL && b != NULL){
            return false;
        }
        return (a -> data , b -> data) && areMirror(a -> left , b -> right) && areMirror(a -> right , b -> left);
    }
};