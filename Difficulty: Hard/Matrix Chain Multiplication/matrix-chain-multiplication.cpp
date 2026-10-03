class Solution {
  public:
  int dp[1001][1001];
    int matrixMultiplication(vector<int> &arr) {
        int n = arr.size();
        memset( dp , - 1 , sizeof(dp));
        int  i = 1;
        int j = n - 1;
        return solve(arr , i , j);
        
    }
    int solve(vector <int> arr , int i  , int j){
        if( i >= j){
            return 0;
        }
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        int mini1 = INT_MAX;
        for(int k = i ;  k < j ; k++){
            int tempans = solve(arr , i , k ) + solve(arr , k+1 , j) + arr[i-1] * arr[k] * arr[j];
            if(tempans < mini1){
                mini1 = tempans;
            }
        }
        return dp[i][j] = mini1;
    }
};