class Solution {
  public:
    bool checkPangram(string& s) {
        map < char , int > store;
        for(char c : s){
          if (isalpha(c)) {
                store[tolower(c)]++;
            }  
        }
        if(store.size() == 26){
            return true;
        }
        return false;
        
    }
};