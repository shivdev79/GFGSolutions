class Solution {
  public:
    vector<int> uniqueSorted(vector<int>& arr) {
        set <int> s1;
        for(auto it : arr){
            s1.insert(it);
        }
        vector <int> ans;
        for(auto it : s1){
            ans.push_back(it);
        }
        return ans;
    }
};