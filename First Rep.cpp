class Solution {
public:
    char firstRep(string s) {
        map<char, int> mpp;

        for(char ch : s) {
            mpp[ch]++;
        }
        for( char ch : s){
            if(mpp[ch] > 1){
                return ch;
            }
        }
        return '#';
        
    }
};