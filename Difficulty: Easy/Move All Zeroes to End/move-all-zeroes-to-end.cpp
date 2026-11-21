class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        vector <int> store;
        int n = arr.size();
        for(int i = 0 ; i < n ; i++){
            if(arr[i] != 0){
                store.push_back(arr[i]);
            }
        }
        int cnt = 0;
        for(int i = 0 ; i < n ; i++){
            if(arr[i] == 0){
                cnt = cnt + 1;
            }
        }
        for(int i = 0 ; i < cnt ; i++){
            store.push_back(0);
        }
        arr = store;
    }
};