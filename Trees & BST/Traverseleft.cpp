/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
  void traverseleft(Node* root , vector <int> &ans){
      if(root == NULL){
          return ;
      }
      if(root -> left == NULL && root -> right == NULL){
          return ;
      }
      ans.push_back(root -> data);
      if(root -> left != NULL){
          traverseleft(root -> left,ans);
      }
      else{
          traverseleft(root -> right , ans);
      }
  }
  void children(Node *root , vector <int> &ans){
      if(root == NULL){
          return ;
      }
      if(root -> left == NULL && root -> right == NULL){
          ans.push_back(root -> data);
      }
      children(root -> left , ans);
      children(root -> right , ans);
  }
  void traverseright(Node *root , vector <int> &ans){
      if(root == NULL){
          return ;
      }
      if(root -> left == NULL && root -> right == NULL){
          return;
      }
      if(root -> right != NULL){
          traverseright(root -> right , ans);
      }
      else{
          traverseright(root -> left , ans);
      }
      ans.push_back(root -> data);
      
  }
    vector<int> boundaryTraversal(Node *root) {
        vector <int> ans;
        if(root == NULL){
            return ans;
        }
        ans.push_back(root -> data);
        traverseleft(root -> left , ans);
       
        children(root -> left , ans);
        children(root -> right , ans);
        traverseright(root -> right , ans);
        return ans;
    }
};