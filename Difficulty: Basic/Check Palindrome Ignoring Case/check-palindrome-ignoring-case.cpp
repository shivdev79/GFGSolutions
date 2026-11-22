class Solution {
  public:
    bool isPalindrome(string& s) {
        int n = s.size();
        int left = 0;
        int right = n - 1;
        while( left <= right){
            if(tolower(s[left]) != tolower(s[right])){
                return false;
            }
            left = left + 1;
            right = right - 1;
            
        }
        return true;
    }
};