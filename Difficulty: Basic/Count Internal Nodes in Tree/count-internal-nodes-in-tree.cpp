/* Binary Tree Node Structure
class Node {
	public:
	int data;
	Node *left;
	Node *right;
	
	Node(int val) {
		data = val;
		left = right = nullptr;
	}
};
*/

class Solution {
	public:
	int countNonLeafNodes(Node* root) {
		if (root == NULL) {
			return 0;
		}
		int count = 0;
		countnonleaf(root, count);
		return count;
	}
	void countnonleaf(Node* root, int &count) {
		if (root == NULL) {
			return ;
		}
		if (root -> left == NULL && root -> right == NULL) {
		    return;
		}
			
			else {
				count = count + 1;
			}
			
		 countnonleaf(root -> left, count);
		 countnonleaf(root -> right, count);
		}
	};
