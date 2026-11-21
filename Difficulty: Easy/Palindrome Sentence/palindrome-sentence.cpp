class Solution {
  public:
    bool isPalinSent(string &s) {
        int n = s.size();
        int left = 0;
        int right = n - 1;
        while(left <= right){
            if(!isalnum(s[left])){
                left = left + 1;
                continue;
            }
            if(!isalnum(s[right])){
                right = right - 1;
                continue;
            }
            if(tolower(s[left]) != tolower(s[right])){
                return false;
            }
            left = left + 1;
            right = right - 1;
        }
        return true;
    }
};