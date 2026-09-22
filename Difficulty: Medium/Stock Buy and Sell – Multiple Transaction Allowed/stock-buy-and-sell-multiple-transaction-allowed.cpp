class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        // code here
        int maxprofit = 0;
        int profit = 0;
        int n = prices.size();
        for(int i = 1 ; i < n ; i++){
            if(prices[i - 1] < prices[i]){
               profit += prices[i] - prices[i-1];
               maxprofit = max(maxprofit , profit);
            }
        }
        return maxprofit;
    }
};
