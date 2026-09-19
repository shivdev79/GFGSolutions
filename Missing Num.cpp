class Solution {
  public:
    int missingNum(vector<int>& arr) {
        int n = arr.size() + 1;
        int sum1 = 1LL*n*(n+1)/2;
        int sum = 0;
        for(int i = 0 ; i < arr.size() ; i++){
            sum = sum + arr[i];
        }
        int diff = sum1 - sum;
        return diff;
    }
};