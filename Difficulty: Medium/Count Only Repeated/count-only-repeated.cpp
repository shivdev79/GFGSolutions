class Solution {
  public:
    vector<int> findRepeating(vector<int>& arr) {
        map < int , int> mpp;
        vector <int> ans;
        for(auto it : arr){
            mpp[it]++;
        }
        for(auto it : mpp){
            if(it.second > 1){
                ans.push_back(it.first);
                ans.push_back(it.second);
            }
        }
        if(ans.size() == 0){
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        return ans;
    }
};