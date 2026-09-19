class Solution {
  public:
    vector<int> rearrange(vector<int>& arr) {
        
        int n = arr.size();
        vector<int> ans(n, -1);

        for(int i = 0; i < n; i++){
            
            if(arr[i] < n){
                ans[arr[i]] = arr[i];
            }
        }

        return ans;
    }
};