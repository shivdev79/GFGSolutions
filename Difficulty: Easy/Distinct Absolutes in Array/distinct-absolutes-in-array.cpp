class Solution {
	public:
	int distinctCount(vector<int> &arr) {
		set <int> s1;
		int n = arr.size();
		for (int i = 0 ; i < n ; i++) {
			
			s1.insert(abs(arr[i]));
			
		}
		int z = s1.size();
		return z;
	}
};
