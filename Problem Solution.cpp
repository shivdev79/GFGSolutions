/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
};

*/
class Solution {
  public:

    struct Node *mergeResult(Node *node1, Node *node2) {
        Node *temp1 = node1;
        Node *temp2 = node2;
        vector <int> ans;
        while(temp1 != NULL){
            ans.push_back(temp1 -> data);
            temp1 = temp1 -> next;
        }
        while(temp2 != NULL){
            ans.push_back(temp2 -> data);
            temp2 = temp2 -> next;
        }
        sort(ans.begin() , ans.end());
        reverse(ans.begin(),ans.end());
        int size = ans.size();
        Node* head1 = new Node(ans[0]);
        Node* current = head1;
        for(int i = 1; i < size ; i++){
            current -> next = new Node(ans[i]);
            current = current -> next;
        }
        return head1;
    }
};