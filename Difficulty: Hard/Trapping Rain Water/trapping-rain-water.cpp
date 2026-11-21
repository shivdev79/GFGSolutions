class Solution {
  public:
    int maxWater(vector<int> &arr) {
        int n = arr.size();
        vector <int> left = leftans(arr);
        vector <int> right = rightans(arr);
        int sum  = 0 ;
        for(int i = 0 ; i < n ; i++){
            sum = sum + min(left[i] , right[i]) - arr[i];
            
        }
        return sum;
    }
    vector <int> leftans(vector<int> &arr){
        int n = arr.size();
        int maxi = 0;
        vector <int> ans;
        for(int i = 0 ; i < n ; i++){
            maxi = max(maxi , arr[i]);
            ans.push_back(maxi);
        }
        return ans;
    }
    vector <int> rightans(vector <int> &arr){
        int n = arr.size();
        int maxi = 0;
        vector <int> ans;
        for(int i = n - 1 ; i >= 0 ; i--){
            maxi = max(maxi , arr[i]);
            ans.push_back(maxi);
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
};