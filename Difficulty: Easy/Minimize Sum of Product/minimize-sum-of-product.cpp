class Solution {
  public:
    int minProductSum(vector<int> &a, vector<int> &b) {
        sort(a.begin() , a.end());
        sort(b.begin(), b.end(), greater<int>());
        int ans = 0 ;
        int n = a.size();
        for(int i =  0 ; i < n ; i++){
            ans += a[i] * b[i];
        }
        return ans;
    }
};