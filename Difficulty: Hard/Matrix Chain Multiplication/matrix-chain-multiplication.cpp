class Solution {
  public:
  int dp[1001][1001];
    int matrixMultiplication(vector<int> &arr) {
        int n = arr.size();
        memset(dp , -1 , sizeof(dp));
        
        return solve(arr , 1 , n -1);
        
    }
    int solve(vector <int> arr , int i , int j){
        if( i >= j ) return 0;
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        int mn = INT_MAX;
        for(int k = i ; k < j ; k++){
            int temp_ans = solve(arr , i , k) + solve(arr , k+ 1 , j) + arr[i-1] * arr[k] * arr[j];
            if(temp_ans  < mn){
                mn = temp_ans;
            }
        }
        return dp[i][j] = mn;
    }
};