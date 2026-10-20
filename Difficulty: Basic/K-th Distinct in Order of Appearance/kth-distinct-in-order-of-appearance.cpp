class Solution {
  public:
    int kthDistinct(vector<int>& arr, int k) {
        map < int, int> mpp1;
        vector <int> ans;
        for(auto it : arr){
            mpp1[it]++;
        }
        for(auto it : arr){
            if(mpp1[it] == 1){
                ans.push_back(it);
            }
        }
        if(ans.size() < k) return -1;
        return ans[k-1];
    }
};