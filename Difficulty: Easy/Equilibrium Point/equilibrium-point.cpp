class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        int n = arr.size();
        int leftsum = 0;
        int sum = 0;
        for(int i = 0 ; i < n ; i++){
            sum = sum + arr[i];
        }
        for(int i = 0 ; i < n; i++){
            if(leftsum == sum - leftsum - arr[i]){
                return i;
            }
            leftsum = leftsum + arr[i];
        }
        return -1;
    }
};