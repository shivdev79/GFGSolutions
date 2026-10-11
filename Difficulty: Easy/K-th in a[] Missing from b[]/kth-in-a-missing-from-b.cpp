class Solution {
  public:
    int findKthMissing(vector<int>& a, vector<int>& b, int k) {
        map<int, int> mpp2;
        vector<int> ans;

        for(auto it : b) {
            mpp2[it]++;
        }

        for(auto it : a) {
            if(mpp2[it] == 0) {
                ans.push_back(it);
            }
        }

        if(ans.size() < k) return -1;

        return ans[k-1];
    }
};