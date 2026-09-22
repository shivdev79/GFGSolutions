class Solution {
  public:
    int countPairs(vector<int>& arr, int target) {
        unordered_map<int, int> mp;
        int cnt = 0;

        for(int x : arr){
            int need = target - x;

            if(mp.find(need) != mp.end()){
                cnt += mp[need];
            }

            mp[x]++;
        }

        return cnt;
    }
};