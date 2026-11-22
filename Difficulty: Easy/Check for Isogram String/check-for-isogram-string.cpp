class Solution {
  public:
    bool isIsogram(string& s) {
        map <char , int> mpp;
        for(auto it : s){
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