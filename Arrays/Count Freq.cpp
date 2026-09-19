class Solution {
	public:
	vector<vector<int>> countFreq(vector<int>& arr) {
		vector<vector<int>> ans;
		map <int, int> mpp;
		for (auto it : arr) {
			mpp[it]++;
		}
		for (auto it : mpp) {
			ans.push_back({it.first, it.second});
		}
		return ans;
	}
};