class Solution {
  public:
    int findDuplicate(vector<int>& arr, int k) {
        map <int , int> mpp;
        for(auto it : arr){
            mpp[it]++;
        }
        for(auto it : mpp){
            if(it.second ==k){
                return it.first;
            }
        }
        return -1;
    }
};