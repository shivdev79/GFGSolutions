/* a Node of the doubly linked list
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

// Function to insert a new node at given position in doubly linked list.
class Solution {
  public:
    // Function to insert a new node at given position in doubly linked list.
    Node *addNode(Node *head, int pos, int data) {
        Node *newnode = new Node(data);
        Node *temp = head;
        for(int i = 0 ; i < pos ; i++){
            temp = temp -> next;
        }
        newnode -> next = temp -> next;
        temp -> next = newnode;
        newnode -> prev = temp;
        if(newnode -> next != NULL){
            newnode -> next -> prev = newnode;
        }
        return head;
        
    }
};