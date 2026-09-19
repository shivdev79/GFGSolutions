/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/
class Solution {
  public:
    vector<int> nodesAtOddLevels(Node *root) {
        vector <int> ans;
        if(root == NULL){
            return ans;
        }
        
        queue <Node*> q;
        q.push(root);
        int level = 1;
        while(!q.empty()){
            int size = q.size();
            for(int i = 0 ; i < size ; i++){
                Node* temp = q.front();
                q.pop();
                if(level % 2 !=0){
                    ans.push_back(temp-> data);
                }
                if(temp -> left != NULL){
                    q.push(temp -> left);
                }
                if(temp -> right != NULL){
                    q.push(temp -> right);
                }
            }
            level++;
        }
        return ans;
    }
};