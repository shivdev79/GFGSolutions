class Solution {
  public:    
    string reverseSort(string &s) {
        sort(s.begin() , s.end());
        reverse(s.begin() , s.end());
        return s;
    }
};