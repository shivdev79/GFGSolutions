class Solution {
  public:
    int totalWays(vector<int>& arr, int target) {
        int n = arr.size();
        int sum  = 0;
        for(int i = 0 ; i < n ; i++){
            sum  = sum + arr[i];
        }
        int target1 = (sum - target)/2;
        int dp[n+1][target1+1];
        if(abs(target) > sum || (sum - target) % 2 != 0)
            return 0;
        for(int i = 0 ; i <= n ; i++){
            for(int j = 0 ; j <= target1; j++){
                if(i == 0 ){
                    dp[i][j] = 0;
                }
                if( j == 0){
                    dp[i][j] = 1;
                }
            }
        }
        for(int i = 1 ; i <= n ; i++){
            for(int j = 0 ; j <= target1 ; j++){
                if(arr[i-1] <= j){
                    dp[i][j] = dp[i-1][j -arr[i-1]] + dp[i-1][j];
                }
                else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        return dp[n][target1];
    }
};