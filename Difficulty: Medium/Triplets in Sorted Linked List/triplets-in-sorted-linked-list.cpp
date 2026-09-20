/* Structure of linked list Node
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};*/
class Solution {
  public:
    int countTriplets(Node* head, int x) {
        Node* temp = head;
        vector <int> ans;
        int count  = 0;
        while(temp != NULL){
            ans.push_back(temp -> data);
            temp = temp -> next;
        }
        int n = ans.size();
        for(int i = 0 ; i < n; i++){
            int left = i + 1;
            int right =  n - 1;
            while( left < right){
                int sum = ans[left] + ans[right] + ans[i];
                if(sum == x){
                    count ++;
                    left ++;
                    right --;
                }
                else if( x < sum){
                    left++;
                }
                else{
                    right--;
                }
            }
        }
        return count;
        
    }
};