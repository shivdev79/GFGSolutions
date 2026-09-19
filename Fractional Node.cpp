/* Structure of a Linked List Node
class Node
{
public:
    int data;
    struct Node *next;
    Node(int x){
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    int fractionalNode(Node *head, int k) {
        int cnt = 0;
        Node * temp = head;
        while(temp != NULL){
            cnt ++;
            temp = temp -> next;
        }
        int r = (cnt + k -1 )/k;
        temp = head;
        int cnt1 = 0;
        while(temp != NULL){
            cnt1++;
            if(cnt1 == r){
                return temp -> data;
            }
            temp = temp -> next;
        }
        return -1;
    }
};