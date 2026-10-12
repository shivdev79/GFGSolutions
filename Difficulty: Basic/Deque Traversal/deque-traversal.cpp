class Solution {
  public:
    void printDeque(deque<int> &dq) {
        for(int i = 0 ; i < dq.size() ; i++){
            cout << dq[i] <<" ";
        }
        cout << endl;
    }
};