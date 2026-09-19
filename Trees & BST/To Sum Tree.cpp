/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

class Solution {
  public:

    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    void toSumTree(Node *node) {
        final(node);
        
    }
    int final(Node* node){
        if(node == NULL){
            return NULL;
        }
        int left = final(node -> left);
        int right = final(node-> right);
        int orig = node -> data;
        node -> data = left + right;
        return node -> data + orig;
    }
};