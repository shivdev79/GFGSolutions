class Solution {
  public:
    vector<int> intersection(vector<int> &arr1, vector<int> &arr2) {
        vector <int> ans;
        map <int,int> mpp1;
        for(auto it : arr1){
            mpp1[it]=1;
        }
        for(auto it : arr2){
            if(mpp1[it] == 1){
                ans.push_back(it);
                mpp1[it] = 2;
            }
            
            
        }
        return ans;
    }
};