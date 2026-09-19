/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
 1       left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
  int ans = 0;
    int depthOfOddLeaf(Node *root) {
        
        dfs(root , 1, 1);
        return ans;
        
    }
    void dfs(Node* root , int level , int depth){
        if(root == NULL){
            return ;
        }
        if(root -> left == NULL && root -> right == NULL && level % 2 == 1){
            ans = max(ans,depth);
        }
        dfs(root -> left, level + 1 , depth + 1);
        dfs(root -> right , level + 1 , depth + 1);
    }
};