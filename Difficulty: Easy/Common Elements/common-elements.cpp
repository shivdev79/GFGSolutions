class Solution {
  public:
    vector<int> commonElements(vector<int> &a, vector<int> &b) {
        map < int , int> mpp;
        vector <int> ans;
        for(auto it : a){
            mpp[it]++;
        }
        for(auto it : b){
            if(mpp[it] > 0){
                ans.push_back(it);
                mpp[it]--;
            }
        }
        sort(ans.begin() , ans.end());
        return ans;
        
    }
};