class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        int n = arr.size();
        int i = 0;
        int j = 0;
        int sum = 0;
        int mx = INT_MIN;
        while( j < n){
            sum = sum + arr[j];
            if(j - i + 1 < k){
                j = j + 1;
            }
            else if(j - i + 1 == k){
                mx = max(sum , mx);
                sum = sum - arr[i];
                i = i + 1;
                j = j + 1;
                
            }
        }
        return mx;
    }
    
};