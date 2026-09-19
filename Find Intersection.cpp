/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

class Solution {
  public:
    Node* findIntersection(Node* head1, Node* head2) {
        Node* temp1 = head1;
        Node* temp2 = head2;
        vector <int> ans;
        vector <int> final;
        while(temp1 != NULL){
            ans.push_back(temp1 -> data);
            temp1 = temp1 -> next;
        }
        while(temp2 != NULL){
            ans.push_back(temp2 -> data);
            temp2 = temp2 -> next;
        }
        map <int, int> count;
        for (int val : ans) {
            count[val]++;
        }
        vector<int> finalVals;
        for (auto it : count) {
            if (it.second == 2) {
                finalVals.push_back(it.first);
            }
        }
        if (finalVals.empty()) return NULL;
        Node* headq = new Node(finalVals[0]);
        Node* current = headq;
        for(int i = 1 ; i < finalVals.size() ; i++){
            current -> next = new Node(finalVals[i]);
            current = current -> next;
        }
        return headq;
    }
};