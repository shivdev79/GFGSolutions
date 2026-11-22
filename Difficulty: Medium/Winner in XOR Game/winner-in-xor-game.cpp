class Solution {
	public:
	bool makeZero(vector<int>& arr) {
		int x1 = 0;
		for (int i = 0 ; i < arr.size() ; i++) {
			x1 = x1^arr[i];
		}
		if (x1 == 0) {
			return false;
		}
		if (arr.size() % 2 == 1) {
			return true;
		}
		return false;
	}
	
};
