// User function template for C++

/*
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node* divide(Node* head) {
        Node* temp = head;
        vector <int> evens;
        vector <int> odds;
        while(temp != NULL)
        {
            if(temp -> data  %2 == 0){
                evens.push_back(temp -> data);
               
            }
            else{
                odds.push_back(temp -> data);
            }
            temp = temp -> next;
        }
        evens.insert(evens.end(), odds.begin(), odds.end());
        int z = evens.size();
        Node* head1 = new Node(evens[0]);
        Node* current = head1;
        for(int i = 1 ; i < z ; i++ )
        {
            current -> next = new Node(evens[i]);
            current = current -> next;
        }
        return head1;
    }
};