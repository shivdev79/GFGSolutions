class Solution {
  public:
    int pairsum(vector<int> &arr) {
        int n = arr.size();
        if (n < 2) return 0; 
        sort(arr.begin(), arr.end());
        return arr[n - 1] + arr[n - 2];
    }
};