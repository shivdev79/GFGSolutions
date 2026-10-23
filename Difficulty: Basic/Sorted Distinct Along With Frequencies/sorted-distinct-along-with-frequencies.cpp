class Solution {
  public:
    vector<vector<int>> freqSorted(vector<int>& arr) {
        vector<vector<int>> ans;
        map <int,int> mpp1;
        for(auto it : arr){
            mpp1[it]++;
        }
        for(auto it : mpp1){
            ans.push_back({it.first , it.second});

        }
        return ans;
    }
};