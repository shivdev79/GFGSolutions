class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        int n = arr.size();
        int ans = 0;
        int mini = arr[0];
        for(int i = 0 ; i < n ; i++){
            if(arr[i] < mini){
                mini = arr[i];
                ans = i;
            }
        }
        return ans;
    }
};
