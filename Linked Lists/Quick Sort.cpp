/* a node of the singly linked list
struct node
{
    int data;
    struct node *next;

    node(int x){
        data = x;
        next = NULL;
    }
}; */

// Solution class with quickSort function
#include<algorithm>

class Solution {
  public:
    struct Node* quickSort(struct Node* head) {
        Node *temp = head;
        vector <int> store;
        while(temp != NULL){
            store.push_back(temp -> data);
            temp = temp -> next;
        }
        sort(store.begin(), store.end());
        Node* new1 = new Node(store[0]);
        Node* current = new1;
        for(int i = 1 ; i < store.size() ; i++){
            current -> next = new Node(store[i]);
            current = current -> next;
        }
        return new1;
        
    }
};