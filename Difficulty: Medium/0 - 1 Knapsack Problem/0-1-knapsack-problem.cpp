class Solution {
  public:
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        int n = val.size();
        int dp[n+1][W+1];
        for(int i = 0 ; i <= n ; i++){
            for(int j = 0 ; j <= W ; j++){
                if(i == 0){
                    dp[i][j] = 0;
                }
                if(j == 0){
                    dp[i][j] = 0;
                }
            }
        }
        for(int i = 1  ; i <= n ; i++){
            for(int j = 0 ; j <= W; j++){
                if(wt[i-1] <= j){
                    dp[i][j] = max(val[i-1] + dp[i-1][j - wt[i-1]] , dp[i-1][j]);
                }
                else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        return dp[n][W];
        
    }
};