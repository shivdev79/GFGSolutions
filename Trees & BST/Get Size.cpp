/*

Definition for Binary Tree Node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    int getSize(Node* node) {
        if(node == NULL){
            return 0;
        }
        int count = 1;
        count = count + getSize(node-> left) ;
        count = count + getSize(node -> right);
        return count;
    }
};