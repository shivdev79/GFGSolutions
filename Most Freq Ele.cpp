class Solution {
public:
    int mostFreqEle(vector<int>& arr) {
        map<int, int> mpp;

        for (auto it : arr) {
            mpp[it]++;
        }

        int maxfreq = 0;
        int ans = 0;

        for (auto it : mpp) {
            if (it.second >= maxfreq) {
                maxfreq = it.second;
                ans = it.first;
            }
        }

        return ans;
    }
};