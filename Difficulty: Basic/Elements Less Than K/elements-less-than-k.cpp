class Solution {
  public:
    vector<int> elementsLessThanK(vector<int> &arr, int k) {
        int n = arr.size();
        vector <int> ans;
        int cnt = 0;
        for(int i = 0 ; i < n ; i++){
           if(arr[i] < k){
               ans.push_back(arr[i]);
           } 
        }
        return ans;
    }
};