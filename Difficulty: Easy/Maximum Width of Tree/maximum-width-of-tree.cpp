/*  Structure of a Binary Tree
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    int maxWidth(Node* root) {
        if(root == NULL){
            return 0;
        }
        queue < Node* > q;
        q.push(root );
        int maxi = 0;
        while(!q.empty()){
            int n = q.size();
            for(int i = 0 ; i < n ; i++){
                Node* front = q.front();
                q.pop();
                if(front -> left){
                    q.push(front -> left);
                }
                if(front -> right){
                    q.push(front -> right);
                }
            }
            maxi = max( maxi , n);
        }
        return maxi;
    }
};