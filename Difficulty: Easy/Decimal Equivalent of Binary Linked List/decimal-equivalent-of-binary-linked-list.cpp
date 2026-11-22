
class Solution {
  public:
    int decimalValue(Node* head) {
        long long sum = 0;
        long long mod = 1000000007;

        Node* temp = head;

        while(temp != NULL) {
            sum = (sum * 2 + temp->data) % mod;
            temp = temp->next;
        }

        return sum;
    }
};
