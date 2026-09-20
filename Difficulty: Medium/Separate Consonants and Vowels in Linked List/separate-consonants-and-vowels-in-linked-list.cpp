/* Structure of a link list node
class Node {
	public:
	int data;
	Node *next;
	
	Node(int val) {
		data = val;
		next = nullptr;
	}
}; */
class Solution {
	public:
	Node* arrange(Node* head) {
	
		Node* temp = head;
		vector <char> vowels;
		vector <char> conso;
		while (temp != NULL) {
			if (temp -> data == 'a' || temp -> data == 'e' || temp -> data == 'i' || temp -> data == 'o' || temp -> data == 'u') {
				vowels.push_back(temp -> data);
			}
			else {
				conso.push_back(temp -> data);
			}
			temp = temp -> next;
		}
		if(vowels.size() == 0){
		    Node* n2 = new Node(conso[0]);
		    Node* move = n2;
		    for(int i = 1 ; i < conso.size() ; i++){
		        Node* n3 = new Node(conso[i]);
		        move -> next = n3;
		        move = move -> next;
		    }
		    return n2;
		}
		Node* new1 = new Node(vowels[0]);
		Node* move = new1;
		for (int i = 1 ; i < vowels.size() ; i++) {
			Node* n1 = new Node(vowels[i]);
			move -> next = n1;
			move = move -> next;
		}
		for (int i = 0; i < conso.size(); i++) {
			Node* n1 = new Node(conso[i]);
			move->next = n1;
			move = move->next;
		}
		return new1;
		
	}
};
