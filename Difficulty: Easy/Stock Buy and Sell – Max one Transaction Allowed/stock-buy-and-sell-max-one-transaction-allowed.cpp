class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        int n = prices.size();
        int mini = prices[0];
        int diff = 0;
        for(int i = 1 ; i < n ; i++){
            mini = min(mini , prices[i]);
            diff = max(diff , prices[i] - mini);
        }
        return diff;
    }
};
