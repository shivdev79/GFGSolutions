class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        vector <int> ans;
        set <int> s1;
        for(auto it : a){
            s1.insert(it);
        }
        for(auto it : b){
            s1.insert(it);
        }
        for(auto it : s1){
            ans.push_back(it);
        }
        return ans;
    }
};