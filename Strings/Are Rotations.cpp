class Solution {
  public:
    bool areRotations(string &s1, string &s2) {
        if(s1.size() != s2.size()){
            return false;
        }
        string s = s1 + s1;
        if(s.find(s2) != string :: npos){
            return true;
        }
        return false;
    }
};