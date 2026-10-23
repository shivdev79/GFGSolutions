class Solution {
  public:
    bool allCharactersSame(string &s) {
        for(int i = 1 ; i < s.size() ; i++){
            if(s[0] != s[i]){
                return false;
            }
        }
        return true;
        
    }
};