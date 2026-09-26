class Solution {
	public:
	int countPartitions(vector<int>& arr, int diff) {
		int n = arr.size();
		int sum = 0;
		for (int i = 0 ; i < n ; i++) {
			sum = sum + arr[i];
		}
		int s1 = (diff + sum)/2;
		if (diff > sum || (sum + diff) % 2 != 0)
			return 0;
		int dp[n + 1][s1 + 1];
		for (int i = 0 ; i <= n ; i++) {
			for (int j = 0 ; j <= s1 ; j++) {
				if (i == 0) {
					dp[i][j] = false;
				}
				if (j == 0) {
					dp[i][j] = true;
				}
			}
		}
		for (int i = 1 ; i <= n ; i++) {
			for (int j = 0 ; j <= s1 ; j++) {
				if (arr[i - 1] <= j) {
					dp[i][j] = dp[i - 1][j - arr[i - 1]] + dp[i - 1][j];
				}
				else {
					dp[i][j] = dp[i - 1][j];
				}
			}
		}
		return dp[n][s1];
	}
};
