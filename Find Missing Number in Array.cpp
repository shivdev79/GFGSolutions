class Solution {
  public:
    int missingNumber(vector<int>& arr) {
        int n = arr.size();
        for(int i = 0 ; i <= n ; i++){
            if(arr[i] !=  i + 1){
                return i + 1;
            }
        }
        return -1;
    }
};