class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        int n = arr.size();
        vector <int> pos;
        vector <int> neg;
        for(int i = 0 ; i < n ; i++){
            if(arr[i] < 0){
                neg.push_back(arr[i]);
            }
        }
        for(int i = 0 ; i < n ; i++){
            if(arr[i] >= 0){
                pos.push_back(arr[i]);
            }
        }
        int n1 = neg.size();
        int p1 = pos.size();
        for(int  i = 0 ;i < p1 ; i++){
            arr[i] = pos[i];
        }
        for(int i = 0; i < neg.size(); i++) {
            arr[p1 + i] = neg[i];
        }
    }
};