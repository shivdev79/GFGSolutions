class Solution {
	public:
	int perfectSum(vector<int>& arr, int target) {
		int n = arr.size();
		int dp[n + 1][target + 1];
		dp[0][0] = 1;

		for (int j = 1; j <= target; j++)
			dp[0][j] = 0;

		for (int i = 1; i <= n; i++)
			dp[i][0] = 1;
		for (int i = 1 ; i <= n ; i++) {
			for (int j = 0; j <= target ; j++) {
				if (arr[i - 1] <= j) {
					dp[i][j] = dp[i - 1][j - arr[i - 1]] + dp[i - 1][j];
				}
				else {
					dp[i][j] = dp[i - 1][j];
				}
			}
		}
		return dp[n][target];
	}
};