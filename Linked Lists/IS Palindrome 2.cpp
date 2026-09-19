/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       data = x;
       next = nullptr;
    }
};*/

class Solution {
  public:
    bool isPalindrome(Node *head) {
        Node* temp = head;
        vector <int> ans;
        while(temp != NULL){
            ans.push_back(temp -> data);
            temp = temp -> next;
        }
        return funcheck(ans);
    }
    bool funcheck(vector <int> ans){
        int s = 0;
        int e = ans.size() - 1;
        while( s < e){
            if(ans[s] != ans[e]){
                return false;
            
                
            }
            s=s +1;
            e = e - 1;
        }
        return true;
    }
};