/* Structure of a Linked List Node
class Node
{
    int data;
    Node next;
    Node(int d) {
       data = d;
       next = nullptr;
    }
};*/
class Solution {
  public:
    Node* sortLL(Node* head) {
        vector <int> ans;
        Node* temp = head;
        while(temp != NULL){
            ans.push_back(temp -> data);
            temp = temp -> next;
        }
        sort(ans.begin(), ans.end());
        Node* n1 = new Node(ans[0]);
        int n = ans.size();
        Node* move = n1;
        for(int i = 1; i < n ; i++){
            Node* n1 = new Node(ans[i]);
            move -> next = n1;
            move = n1;
        }
        return n1;
    }
};