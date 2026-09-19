class Solution {
  public:
    int count(string& s) {
        map <char , int> mpp;
        for(auto it : s){
            mpp[it]++;
        }
        int cnt = 0;
        for(auto it : mpp){
            if(it.second % 2 == 0){
                cnt = cnt + 1;
            }
        }
        return cnt;
    }
};