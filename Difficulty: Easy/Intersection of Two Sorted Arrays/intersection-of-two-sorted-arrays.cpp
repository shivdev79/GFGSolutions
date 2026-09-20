class Solution {
  public:
    vector<int> intersection(vector<int> &arr1, vector<int> &arr2) {
        vector <int> ans;
        map <int , int> mpp;
        for(auto it : arr1){
            mpp[it] = 1;
        }
        for(auto it : arr2){
            if(mpp[it] == 1){
                mpp[it] = 2;
            }
        }
        for(auto it : mpp){
            if(it.second == 2){
                ans.push_back(it.first);
            }
        }
        return ans;
        
    }
};