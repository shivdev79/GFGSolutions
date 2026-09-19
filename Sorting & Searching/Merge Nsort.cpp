class Solution {
  public:
    vector<int> mergeNsort(vector<int>& arr1, vector<int>& arr2) {
        set <int> s;
        for(int i = 0 ; i < arr1.size() ; i++){
            s.insert(arr1[i]);
        }
        for(int i = 0 ; i < arr2.size() ; i++){
            s.insert(arr2[i]);
        }
        vector<int> ans;
        for (int x : s) {   
            ans.push_back(x);
        }
        return ans;
        
    }
};