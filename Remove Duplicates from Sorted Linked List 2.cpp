class Solution {
  public:
    string removeDuplicates(string &s) {
        unordered_set<char> seen;  
        string temp = "";          

        for (int i = 0; i < s.size(); i++) {
            if (seen.find(s[i]) == seen.end()) {
                seen.insert(s[i]);
                temp.push_back(s[i]);
            }
        }

        return temp;
    }
};