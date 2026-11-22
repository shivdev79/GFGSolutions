class Solution {
  public:
    bool isDistinct(vector<int> arr) {
        map <int , int> mpp;
        for(auto it : arr){
            mpp[it]++;
        }
        for(auto it : mpp){
            if(it.second > 1){
                return false;
            }
        }
        return true;
    }
};