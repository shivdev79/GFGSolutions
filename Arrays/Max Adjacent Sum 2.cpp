class Solution {
  public:
    int maxAdjSum(vector<int> &arr) {
        int n = arr.size();
        int maxsum = arr[0] + arr[1];
        int sum = 0;
        for(int i = 1 ; i < n -1 ; i++){
            sum = arr[i] + arr[i+1];
            if(sum > maxsum){
                maxsum = sum;
            }
        }
        return maxsum;
    }
};