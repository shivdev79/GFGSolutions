class Solution {
  public:
    int cutRod(vector<int> &price) {
        int n = price.size();
        vector <int> length;
        for(int i = 1 ; i<= n ; i++){
            length.push_back(i);
        }
        int sum = 0;
        for(int i = 0 ; i < n ; i++){
            sum = sum + length[i];
        }
        int s = length.size();
        int dp[n+1][n+1];
        for(int i = 0 ;  i <= n ; i++){
            for(int j = 0 ; j <= n ; j++){
                if(i == 0){
                    dp[i][j] = false;
                }
                if(j == 0){
                    dp[i][j] = false;
                }
            }
        }
        for(int i = 1 ; i <= n ; i++){
            for(int j = 0 ; j <= n ; j++){
                if(length[i-1] <= j){
                    dp[i][j] = max(price[i-1] +dp[i][j-length[i-1]] , dp[i-1][j]);
                }
                else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        return dp[n][n];
    }
};