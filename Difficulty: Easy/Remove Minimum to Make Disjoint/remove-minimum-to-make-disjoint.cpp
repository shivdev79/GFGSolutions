class Solution {
  public:
    int minRemove(vector<int> &a, vector<int> &b) {
        map <int , int> mpp1;
        map <int , int> mpp2;
        int ans = 0;
        for( auto it : a){
            mpp1[it]++;
        }
        for(auto it : b){
            mpp2[it]++;
        }
        for(auto it : mpp1){
            if(mpp2[it.first]){
                 ans += min(it.second, mpp2[it.first]);
            }
            
        }
       return ans;
    }
};