/*Linked list Node structure

struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/

class Solution {
  public:
    Node* mergeKLists(vector<Node*>& arr) {
        int n = arr.size();
        vector<int> values;
        for (int i = 0; i < n; i++) {
            Node* current = arr[i];
            while (current != NULL) {
                values.push_back(current->data);
                current = current->next;
            }
        }
        sort(values.begin(), values.end());
        Node* new1 = new Node(values[0]);
        Node* current = new1;
        for(int i = 1 ; i < values.size() ; i++){
            current -> next = new Node(values[i]);
            current = current -> next;
        }
        return new1;
        
    }
};