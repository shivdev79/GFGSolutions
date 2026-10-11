class Solution {
  public:
    vector<int> findIntersection(vector<int>& a, vector<int>& b) {
        map <int , int> mpp1;
        map <int , int> mpp2;
        vector <int> ans;
        for(auto it : a){
            mpp1[it]++;
        }
        for(auto it : b){
            mpp2[it]++;
        }
        for(auto it : a){
            if(mpp2[it]){
                ans.push_back(it);
            }
        }
        return ans;
        
    }
};