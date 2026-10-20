class Solution {
  public:
    vector<int> getSmaller(vector<int>& arr, int target) {
        vector <int> ans;
        int n = arr.size();
        for(int i = 0 ; i  < n ; i++){
            if(arr[i] < target){
                ans.push_back(arr[i]);
            }
            
        }
        return ans;
    }
};
