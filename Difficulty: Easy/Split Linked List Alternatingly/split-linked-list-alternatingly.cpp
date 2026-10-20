/* Linked List Node
class Node {
	public:
	int data;
	Node *next;
	Node(int x) {
		data = x;
		next = nullptr;
	}
};
*/

class Solution {
	public:
	vector<Node *> alternatingSplitList(Node *head) {
		Node* temp = head;
		vector <int> ans;
		while (temp != NULL) {
			ans.push_back(temp -> data);
			temp = temp -> next;
		}
		vector <int> store1;
		vector <int> store2;
		int n = ans.size();
		int i = 0;
		int j = 0;
		for (int i = 0; i < n; i++) {
			if (i % 2 == 0) {
				store1.push_back(ans[i]);
			} else {
				store2.push_back(ans[i]);
			}
		}
		Node* temp1 = new Node(store1[0]);
		Node* temp2 = new Node(store2[0]);
		Node* move1 = temp1;
		Node* move2 = temp2;
		for (int i = 1 ; i < store1.size() ; i++) {
			Node* new1 = new Node(store1[i]);
			move1 -> next = new1;
			move1 = new1;
		}
		for (int i = 1 ; i < store2.size() ; i++) {
			Node* new2 = new Node(store2[i]);
			move2 -> next = new2;
			move2 = new2;
		}
		vector <Node*> link;
		link.push_back(temp1);
		link.push_back(temp2);
		return link;
	}
	
};
