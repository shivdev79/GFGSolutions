class Solution {
	public:
	stack<int> insertAtBottom(stack<int> &st, int x) {
		if (st.empty()) {
			st.push(x);
			return st;
		}
		stack <int> s1;
		vector <int> ans;
		while (!st.empty()) {
			int z = st.top();
			ans.push_back(z);
			st.pop();
		}
		reverse(ans.begin(), ans.end());
		vector <int> store;
		store.push_back(x);
		for (int i = 0 ; i < ans.size() ; i++) {
			store.push_back(ans[i]);
		}
		int n = ans.size() + 1;
		for (int i = 0 ; i < n ; i ++) {
			s1.push(store[i]);
		}
		return s1;
		
	}
};