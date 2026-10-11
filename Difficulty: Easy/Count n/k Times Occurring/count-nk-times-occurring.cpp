class Solution {
  public:
    int countSpecials(int k, vector<int> &arr) {
        int cnt = 0;
        int n = arr.size();
        map<int , int> mpp;
        for(auto it : arr){
            mpp[it]++;
        }
        for(auto it : mpp){
            if(it.second == (n/k)){
                cnt++;
            }
        }
        return cnt;
    }
};