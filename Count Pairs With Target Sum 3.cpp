/* Structure of a link list node
class Node {
  public:
    int data;
    Node *next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};*/

class Solution {
  public:
    int countPairs(Node* head1, Node* head2, int x) {
        vector <int> ans1;
        vector <int> ans2;
        Node* temp1 = head1;
        while(temp1 != NULL){
            ans1.push_back(temp1 -> data);
            temp1 = temp1 -> next;
        }
        Node* temp2 = head2;
        while(temp2 != NULL){
            ans2.push_back(temp2 -> data);
            temp2 = temp2 -> next;
        }
       map<int, int> mpp;

       for(auto val : ans2){
           mpp[val]++;
       }

       int cnt = 0;

       for(auto val : ans1){
           int required = x - val;

           if(mpp[required] > 0){
               cnt += mpp[required];
           }
       }

       return cnt;
    }
};
























