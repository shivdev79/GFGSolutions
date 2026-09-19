class Solution {
public:
    // Function to find the maximum triplet sum in the array.
    int maxTripletSum(vector<int> &arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        return arr[n-1] + arr[n-2] + arr[n-3];
    }
};