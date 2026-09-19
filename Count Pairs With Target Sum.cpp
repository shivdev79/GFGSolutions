class Solution {
  public:
    int countPairs(vector<int>& arr) {
        map <int , int> mpp;
        for(auto it : arr){
            mpp[it]++;
        }
        long long cnt = 0;
        for(auto it : mpp){
            long long freq = it.second;
            cnt = cnt + freq*(freq - 1) / 2;
        }
        return cnt;
    }
};