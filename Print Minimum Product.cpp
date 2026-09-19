class Solution {
  public:
    long long printMinimumProduct(vector<int> &arr) {
        sort(arr.begin(), arr.end());
        int k1 = arr[0];
        int k2 = arr[1];
        long long multi = k1*k2;
        return multi;
        
    }
};