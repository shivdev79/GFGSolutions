class Solution {
  public:
    int countWords(vector<string> &list) {
        int cnt = 0;
        map <string , int> mpp;
        for(auto it : list){
            mpp[it]++;
        }
        for(auto it : mpp){
            if(it.second  == 2){
                cnt = cnt + 1;
            }
        }
        
        return cnt;
    }
};