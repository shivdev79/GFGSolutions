class Solution {
  public:
    vector<vector<int>> findAllPairs(vector<int> &arr, int target) {
        vector<vector<int>> ans;
        map <int,int> mpp;
        int n = arr.size();
        for(int i = 0 ; i  < n ; i++){
            for(int j = i + 1 ; j < n ; j++){
                int sum = arr[i] + arr[j];
                if(sum == target){
                    ans.push_back({i , j});
                }
                
            }
        }
        return ans;
    }
};