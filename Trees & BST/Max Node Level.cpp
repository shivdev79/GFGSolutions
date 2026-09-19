/*Complete the function below
Node is as follows:
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:

    // Return the level (0-indexed) with maximum number of nodes.
    int maxNodeLevel(Node *root) {
        int level = 0;
        int maxLevel = 0;
        int maxCount = 0;
        if(root == NULL){
            return 0;
        }
        queue <Node*> q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            if(size > maxCount){
                maxCount = size ;
                maxLevel = level;
            }
            for(int i = 0; i < size ; i++){
                Node*temp = q.front();
                q.pop();
                if(temp -> left != NULL){
                    q.push(temp -> left);
                }
                if(temp -> right != NULL){
                    q.push(temp -> right);
                }
            }
            level++;
        }
        return maxLevel;
    }
};




