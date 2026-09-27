class Solution {
	public:
	int dp[1000][1000];
	int lcs(string &s1, string &s2) {
		memset(dp, -1, sizeof(dp));
		int m = s1.size();
		int n = s2.size();
		return lcs1(s1, s2, m, n);
		
	}
	int lcs1(string &s1, string &s2, int m, int n) {
		if (m == 0 || n == 0) {
			return 0;
		}
		if (dp[m][n] != -1) {
			return dp[m][n];
		}
		if (s1[m - 1] == s2[n - 1]) {
			return dp[m][n] =  1 + lcs1(s1, s2, m - 1, n - 1);
		}
		else {
			return dp[m][n] = max(lcs1(s1, s2, m, n - 1), lcs1(s1, s2, m - 1, n));
		}
	}
};
