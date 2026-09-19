class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        map<int , int> store1;
        map<int , int> store2;
        for(int i = 0 ; i < s1.size() ; i++){
            store1[s1[i] - 'a']++;
        }
        for(int i = 0 ; i < s2.size() ; i++){
            store2[s2[i] - 'a']++;
        }
        return store1 == store2;
    }
};