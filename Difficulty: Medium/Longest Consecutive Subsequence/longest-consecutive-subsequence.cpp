class Solution {
	public:
	int longestConsecutive(vector<int>& arr) {
		sort(arr.begin(), arr.end());
		int n = arr.size();
		int last = INT_MIN;
		int cnt = 1;
		int longest = 1;
		for (int i = 1 ; i < n ; i++) {
			if (arr[i] == arr[i - 1]) {
				continue;
			}
			else if (arr[i] == arr[i-1] +1) {
				cnt = cnt + 1;
			}
			else {
				cnt = 1;
			}
			longest = max(longest, cnt);
		}
		return longest;
	}
};
