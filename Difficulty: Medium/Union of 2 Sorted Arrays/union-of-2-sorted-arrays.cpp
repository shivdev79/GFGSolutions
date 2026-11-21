class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        vector <int> ans;
        set <int> s1;
        for(int i = 0 ; i < a.size() ; i++){
            s1.insert(a[i]);
        }
        for(int i = 0 ; i < b.size() ; i++){
            s1.insert(b[i]);
        }
        
        for(auto it : s1){
            ans.push_back(it);
        }
        return ans;
    }
};