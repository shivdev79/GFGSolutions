
class Solution {
  public:
    int minProduct(vector<int> &arr, int k) {
        sort(arr.begin(), arr.end());

        if (k > arr.size()) {
            k = arr.size();
        }

        long long mul = 1;
        long long mod = 1000000007LL;

        for (int i = 0; i < k; i++) {
            mul = (mul * arr[i]) % mod;
        }

        return mul;
    }
};
