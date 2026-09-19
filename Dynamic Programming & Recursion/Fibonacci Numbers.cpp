class Solution {
public:
    vector<int> fibonacciNumbers(int n) {
        vector<int> dp(n + 1);
        const int MOD = 1000000007;
        dp[0] = 0;

        if(n >= 1)
            dp[1] = 1;

        for(int i = 2; i <= n; i++) {
            dp[i] = (dp[i - 1] + dp[i - 2])%MOD;
        }

        return dp;
    }
};