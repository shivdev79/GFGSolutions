class Solution {
  public:
    // Function to find the maximum element from array a[] and
    // the minimum element from array b[] and return their product.
    long long find_multiplication(vector<int> &arr1, vector<int> &arr2) {
        sort(arr1.begin() , arr1.end());
        sort(arr2.begin() , arr2.end());
        long long n = arr1.size();
        long long z = arr1[n-1];
        long long s = arr2[0];
        long long ans = z*s;
        return ans;
        
    }
};