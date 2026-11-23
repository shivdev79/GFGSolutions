class Solution {
public:
    int countWords(string &s) {
        int n = s.size();
        int cnt = 0;

        for(int i = 0; i < n; i++) {
            if(s[i] >= 'a' && s[i] <= 'z') {
                if(i == 0 || s[i-1] == ' ' || s[i-1] == '\n' || s[i-1] == '\t') {
                    cnt++;
                }
            }
        }

        return cnt;
    }
};