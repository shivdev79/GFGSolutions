/* Structure of Linked List Node
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = nullptr ;
    }
};
*/

class Solution {
  public:
    Node* reverseList(Node* head) {
        stack <int> st;
        Node* temp = head;
        while(temp != NULL){
            st.push(temp -> data);
            temp = temp -> next;
        }
        temp = head;
        while(temp != NULL){
            temp -> data = st.top();
            st.pop();
            temp = temp -> next;
        }
        return head;
        
    }
};