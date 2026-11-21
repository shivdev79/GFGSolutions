class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        map<int , int> mpp1;
        vector <int> ans;
        for(auto it : arr){
            mpp1[it]++;
        }
        for(auto it : mpp1){
            if(it.second == 2){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};