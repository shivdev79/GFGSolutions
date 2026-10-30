class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& arr) {
        int i = 0;
        int j = 0;
        int sum = 0;
        int mini = INT_MAX;
        while( j < arr.size()){
            sum = sum + arr[j];
            while(sum > x){
                mini = min(mini , j - i + 1);
                sum = sum  - arr[i];
                i = i + 1;
            }
            j = j + 1;
        }
        if(mini == INT_MAX) return 0;

        return mini;
    }
};