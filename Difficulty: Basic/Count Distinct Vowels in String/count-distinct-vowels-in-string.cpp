class Solution {
  public:
    int countVowels(string &s) {
        set <char> s1;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == 'a' || s[i] == 'e' ||
            s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                s1.insert(s[i]);
            }
        }
        int z = s1.size();
        return z;
    }
};