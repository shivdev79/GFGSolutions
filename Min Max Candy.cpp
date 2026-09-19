class Solution {
  public:
    vector<int> minMaxCandy(vector<int>& prices, int k) {
        int n = prices.size();
        sort(prices.begin() , prices.end());
        vector <int> ans;
        int i = 0 ;
        int j = n -1;
        int min_amt = 0;
       
        while(i <= j){
            min_amt += prices[i];
            i++;
            j-=k;
            
        }
        int max_amt = 0;
        i = n -1;
        j = 0;
        while(j <= i){
            max_amt += prices[i];
            i--;
            j+=k;
            
        }
        ans.push_back(min_amt);
        ans.push_back(max_amt);
        return ans;
    }
};