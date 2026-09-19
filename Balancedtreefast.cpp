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
  pair<bool , int> balancedtreefast(Node* root){
      if(root == NULL){
          pair <bool , int> p = make_pair(true , 0);
          return p;
      }
      pair < bool , int> left = balancedtreefast(root -> left);
      pair <bool , int> right = balancedtreefast(root -> right);
      bool leftans = left.first;
      bool rightans = right.first;
      bool diff = abs(left.second - right.second) <= 1;
      pair<bool , int> ans;
      ans.second = max(left.second , right.second) + 1;
      if(leftans && rightans && diff){
          ans.first = true;
      }
      else{
          ans.second = false;
      }
      return ans;
      
  }
    bool isBalanced(Node* root) {
        return balancedtreefast(root).first;
    }
};