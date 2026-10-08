class Solution {
  public:
    vector<int> findMissing(vector<int>& a, vector<int>& b) {
        vector <int> ans;
        map <int , int> mpp;
        for(auto it : b){
            mpp[it]++;
        }
        for(auto it : a){
            if(!mpp[it]){
                ans.push_back(it);
            }
        }
        return ans;
    }
};
