class Solution {
  public:
    string toUpper(string& s) {
        string z;
        for(int i = 0 ; i < s.size() ; i++){
            z += toupper(s[i]);
        }
        return z;
    }
};