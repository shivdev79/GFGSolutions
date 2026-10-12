class Solution {
	public:
	queue<int> reverseFirstK(queue<int> q, int k) {
		vector <int> ans;
		while (!q.empty()) {
			ans.push_back(q.front());
			q.pop();
		}
		if (k < 0 || k > ans.size()) {
			for (int i = 0; i < ans.size(); i++) {
				q.push(ans[i]);
			}
			return q;
		}
		reverse(ans.begin(), ans.begin() + k);
		queue <int> q1;
		for (int i = 0 ; i < ans.size() ; i++) {
			q1.push(ans[i]);
		}
		return q1;
		
	}
};
