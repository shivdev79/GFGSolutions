class Solution {
  public:
    int countCamelCase(string &s) {
        int n = s.size();
        int cnt = 0;
        for(int i = 0 ; i < n ; i++){
            if(isupper(s[i])){
                cnt = cnt + 1;
            }
        }
        return cnt;
    }
};