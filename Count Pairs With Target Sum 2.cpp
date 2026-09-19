class Solution {
  public:
    int countPairs(vector<int>& arr, int k) {
        map<int, int> mp;
        int cnt = 0;

        for(int x : arr) {
            int rem = x % k;

            if(mp.find(rem) != mp.end())
                cnt += mp[rem];

            mp[rem]++;
        }

        return cnt;
    }
};