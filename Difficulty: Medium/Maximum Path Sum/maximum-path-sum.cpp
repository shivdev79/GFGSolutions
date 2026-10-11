/* Structure of binary tree node
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    int findMaxSum(Node *root) {
        int maxi = INT_MIN;
        maxsumpath(root , maxi );
        return maxi;
    }
    int maxsumpath(Node *root , int &maxi){
        if(root == NULL){
            return 0;
        }
        int leftsum = maxsumpath(root -> left , maxi);
        int rightsum = maxsumpath(root -> right , maxi);
        leftsum = max(0 , leftsum);
        rightsum = max(0 , rightsum);
        maxi = max( maxi , leftsum + rightsum + root -> data);
        return (root -> data) + max(leftsum , rightsum);
    }
};