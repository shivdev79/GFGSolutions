class Solution {
  public:
    int sumExceptFirstLast(vector<int>& arr) {
        int n = arr.size();
        vector <int> ans;
        for(int i = 1 ; i < n - 1 ; i++){
            ans.push_back(arr[i]);
        }
        int sum = 0;
        for(int i = 0 ; i < ans.size() ; i++){
            sum = sum + ans[i];
        }
        return sum;
    }
    
};