class Solution {
  public:
    int assignHole(vector<int>& mices, vector<int>& holes) {
        sort(mices.begin() , mices.end());
        sort(holes.begin() , holes.end());
        int n = holes.size();
        int ans = INT_MIN;
        for(int i = 0 ; i < n ; i++){
            ans = max(ans , abs( holes[i] - mices[i]));
        }
        return ans;
        
    }
};