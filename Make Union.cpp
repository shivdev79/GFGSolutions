/*
// structure of the node is as follows

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
    struct Node* makeUnion(struct Node* head1, struct Node* head2) {
        Node *temp1 = head1;
        Node* temp2 = head2;
        vector <int> ans;
        while(temp1 != NULL){
            ans.push_back(temp1 -> data);
            temp1 = temp1 -> next;
        }
        while( temp2 != NULL){
            ans.push_back(temp2 -> data);
            temp2 = temp2 -> next;
        }
        
        set <int> s1(ans.begin(), ans.end());
        vector <int> vect(s1.begin(),s1.end());
        int z = vect.size();
        if(z == 0){
            return NULL;
        }
        Node* newhead= new Node(vect[0]);
        Node* current = newhead;
        for(int i = 1 ; i < z ; i++){
            current -> next = new Node(vect[i]);
            current = current -> next;
        }
        return newhead;
        
    }
};