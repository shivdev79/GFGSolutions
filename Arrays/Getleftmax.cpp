class Solution {
public:

    vector<int> getleftmax(vector<int>& arr, int& n) {
        vector<int> ans(n);
        int maxi = 0;

        for(int i = 0; i < n; i++) {
            maxi = max(maxi, arr[i]);
            ans[i] = maxi;
        }

        return ans;
    }

    vector<int> getrightmax(vector<int>& arr, int& n) {
        vector<int> ans(n);
        int maxi = 0;

        for(int i = n - 1; i >= 0; i--) {
            maxi = max(maxi, arr[i]);
            ans[i] = maxi;
        }

        return ans;
    }

    int maxWater(vector<int>& arr) {
        int n = arr.size();

        vector<int> leftmax = getleftmax(arr, n);
        vector<int> rightmax = getrightmax(arr, n);

        int sum = 0;

        for(int i = 0; i < n; i++) {
            int wateracc = min(leftmax[i], rightmax[i]) - arr[i];
            sum += wateracc;
        }

        return sum;
    }
};