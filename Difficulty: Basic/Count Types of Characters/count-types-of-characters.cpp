class Solution {
  public:
    vector<int> count(string &s) {
        vector <int> ans;
        int l = 0;
        int u = 0;
        int s1 = 0;
        int n = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(islower(s[i])){
                l = l + 1;
            }
            else if(isupper(s[i])){
                u = u + 1;
            }
            else if(isdigit(s[i])){
                n = n  + 1;
            }
            else{
                s1 = s1 + 1;
            }
        }
        ans.push_back(u);
        ans.push_back(l);
        ans.push_back(n);
        ans.push_back(s1);
        return ans;
    }
};