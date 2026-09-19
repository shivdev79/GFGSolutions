class Solution {
  public:
    vector<int> singleNum(vector<int>& arr) {
        map <int , int> mpp;
        vector <int> ans;
        for(auto it : arr){
            mpp[it]++;
        }
        for(auto it : mpp){
            if(it.second == 1){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};