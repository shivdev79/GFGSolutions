class Solution {
	public:
	vector<int> findDuplicates(vector<int>& arr) {
		map < int, int> mpp;
		int n = arr.size();
		for (auto it : arr) {
			mpp[it]++;
		}
		vector<int> ans;
		
		for (auto it : arr) {
			if (mpp[it] >= 2) {
				ans.push_back(it);
				mpp[it] = 0;
			}
		}
		
		if (ans.size() == 0) {
			ans.push_back(-1);
		}
		return ans;
	}
};
