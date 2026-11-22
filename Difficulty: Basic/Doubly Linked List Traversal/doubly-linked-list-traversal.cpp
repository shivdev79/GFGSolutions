/* Structure of doubly linked list Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int x) {
        data = x;
        next = nullptr;
        prev = nullptr;
    }
};*/
class Solution {
  public:
    vector<vector<int>> displayList(Node *head) {
        vector<vector<int>> ans;
        vector <int> first;
        Node* temp = head;
        while(temp != NULL){
            first.push_back(temp -> data);
            temp = temp -> next;
        }
        ans.push_back(first);
        vector<int> second;
        reverse(first.begin() , first.end());
        for(int i = 0 ; i < first.size() ; i++){
            second.push_back(first[i]);
        }
        ans.push_back(second);
        return ans;
    }
};