class Solution {
public:
    char getMaxOccuringChar(string& s) {
        map<char, int> getmax;

        for (char c : s) {
            getmax[c]++;
        }

        char result = '\0';
        int maxFreq = -1;
        for (auto it : getmax) {
            if (it.second > maxFreq) {
                maxFreq = it.second;
                result = it.first;
            }
        }

        return result;
    }
};