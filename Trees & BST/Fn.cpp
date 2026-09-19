class Solution {
  public:
    bool fn(Node* root) {
        if (!root) return true;

        // If both children exist
        if (root->left && root->right) {
            if (root->left->data + root->right->data != root->data)
                return false;
        }

        // If only one child exists
        if ((root->left && !root->right) || (root->right && !root->left)) {
            int child = root->left ? root->left->data : root->right->data;
            if (child != root->data)
                return false;
        }

        return fn(root->left) && fn(root->right);
    }

    bool isSumProperty(Node* root) {
        return fn(root);
    }
};