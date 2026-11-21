class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        map <int , int> mpp;
        int n = arr.size();
        for(auto it : arr){
            mpp[it]++;
        }
        for(auto it : mpp){
            if(it.second > (n/2)){
                return it.first;
            }
        }
        return -1;
    }
};