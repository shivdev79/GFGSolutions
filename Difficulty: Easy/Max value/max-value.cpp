class Solution {
  public:
    int maxVal(vector<int> &arr) {
        int maxi = INT_MIN, mini = INT_MAX;
        int n = arr.size();

        for(int i = 0; i < n; i++) {
            maxi = max(maxi, arr[i] - i);
            mini = min(mini, arr[i] - i);
        }

        return maxi - mini;
    }
};