/* Structure of circular linked list Node
class Node {
  public:
    Node* next;
    int data;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};*/
class Solution {
  public:
    Node* insertNodeAtPos(Node* head, int pos, int x) {
        if(head == NULL){
            Node* newnode = new Node(x);
            head = newnode;
            newnode -> next = newnode;
            return head;
        }
        if(pos == 0){
            Node* temp = head;
            Node* first = head;
            while(temp -> next != first){
                temp = temp -> next;
            }
            Node* newnode = new Node(x);
            newnode-> next = head;
            temp -> next = newnode;
            head = newnode;
            return head;
        }
        int cnt = 0;
        Node* temp = head;
        Node* first = head;
        while(temp -> next != first){
            cnt ++;
            if(cnt == pos){
             Node * newnode1 = new Node(x);
             newnode1 -> next = temp -> next;
             temp -> next = newnode1;
             return head;
             
            }
            temp = temp -> next;
            if(temp -> next == first){
                break;
            }
        }
        if(cnt + 1 == pos){
            Node* newone = new Node(x);
            newone -> next = temp -> next;
            temp -> next = newone;
        }
        return head;
    }
};