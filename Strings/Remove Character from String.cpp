// User function Template for C++
class Solution {
  public:
    // Function to remove all occurrences of the character from the string
    void removeCharacter(string &s, char c) {
        int n = s.size();
        string temp = "";
        for(int i = 0 ; i < n ; i++){
            if(s[i] == c){
                continue;
            }
            else{
                temp.push_back(s[i]);
            }
        }
        s = temp;
    }
};