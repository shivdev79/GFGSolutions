class Solution {
  public:
  vector <int> left(vector <int> &arr , int n){
      vector <int> ans(n);
    
      int maxi = 0;
      for(int i = 0 ; i < n ; i++){
          maxi = max(maxi , arr[i]);
          ans[i] = maxi;
      }
      return ans;
  }
  vector <int> right(vector <int> &arr , int n){
      vector <int> ans1(n);
     
      int maxi = 0;
      for(int i = n -1 ; i >= 0 ; i--){
          maxi = max(maxi , arr[i]);
          ans1[i] = maxi;
      }
      return ans1;
      
  }
    int maxWater(vector<int> &arr) {
        int n = arr.size();
        int sum = 0;
        vector <int> leftmax = left(arr , n);
        int height  = 0;
        vector <int> rightmax = right(arr , n);
        for(int i = 0 ; i < n ; i++){
            height = min(leftmax[i] , rightmax[i]) - arr[i];
            sum = sum + height;
        }
        return sum;
    }
};