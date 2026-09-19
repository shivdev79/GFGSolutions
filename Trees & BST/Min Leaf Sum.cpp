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
    int minLeafSum(Node *root) {
        if(root == NULL){
            return 0;
        }
        queue <Node*> q;
        q.push(root);
        
        while(!q.empty()){
            bool isleaf = false;
            int sum = 0;
            int size = q.size();
            for(int i = 0  ; i < size ; i++)
            {
                Node* temp = q.front();
                q.pop();
                if(temp -> left == NULL && temp -> right == NULL){
                    sum = sum + temp -> data;
                    isleaf = true;
                }
                if(temp -> left != NULL){
                    q.push(temp -> left);
                }
                if(temp -> right != NULL){
                    q.push(temp -> right);
                }
                
            }
            if(isleaf){
                return sum;
            }
        }
        return 0;
    }
};