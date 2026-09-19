// User function Template for C++

class Solution {
  public:
    int countNodes(Node* root) {
        int count = 0;
        dfs(root , count);
        return count;
        
    }
    void dfs(Node*root , int &count){
        if(root == NULL){
            return ;
        }
        count++;
        dfs(root -> left , count);
        dfs(root -> right , count);
    }
};