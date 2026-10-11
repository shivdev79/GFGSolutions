class Solution {
  public:
    int maxValue(vector<int>& arr) {
        int i = 0;
        int n = arr.size();
        int j = n - 1;
        int ans = INT_MIN;
        while( i < j){
            ans = max(ans , abs(i - j) * min(arr[i] , arr[j]));
            if(arr[i] < arr[j]){
                i = i + 1;
            }
            else{
                j--;
            }
        }
        return ans;
        
    }
};