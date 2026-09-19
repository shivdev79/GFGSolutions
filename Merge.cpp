/*
class Node {
  public:
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
    vector<int> merge(Node *root1, Node *root2) {
        vector <int> ans1;
        vector <int> ans2;
        vector <int> final;
        inorder(root1 , ans1);
        inorder(root2 , ans2);
        int i = 0;
        int j = 0;
        while (i < ans1.size() && j < ans2.size()){
            if(ans1[i] < ans2[j]){
                final.push_back(ans1[i++]);
            }
            else{
                final.push_back(ans2[j++]);
            }
        }
        while( i < ans1.size()){
            final.push_back(ans1[i++]);
        }
        while( j < ans2.size()){
            final.push_back(ans2[j++]);
        }
        return final;
        
    }
    void inorder(Node *root  , vector <int> &ans){
        if(root == NULL){
            return ;
        }
        inorder(root -> left , ans);
        ans.push_back(root -> data);
        inorder(root -> right , ans);
    }
};