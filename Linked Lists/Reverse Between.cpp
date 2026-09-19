// User function Template for C++

/*struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};*/
class Solution {
  public:
    Node* reverseBetween(int a, int b, Node* head) {
        Node* temp = head;
        vector <int> ans;
        while(temp != NULL){
            ans.push_back(temp -> data);
            temp = temp -> next;
        }
        reverse(ans.begin() + (a-1), ans.begin() + b);
        Node *new1 = new Node(ans[0]);
        Node* current = new1;
        for(int i = 1 ; i < ans.size() ; i++){
            current -> next = new Node(ans[i]);
            current = current-> next;
        }
        return new1;
    }
};