// User function template for C++
class Solution {
  public:
    vector<int> sumClosest(vector<int>& arr, int target) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int left = 0;
        int right = n - 1;
        int maxdiff = INT_MAX;
        pair <int,int> ans;
        if(n==1){
            return{};
        }
        while(left < right){
            int sum = arr[left] + arr[right];
            int diff = abs(target - sum);
            if(diff < maxdiff){
                maxdiff = diff;
                ans = {arr[left],arr[right]};
            }
            if(sum < target){
                left++;
            }
            else{
                right--;
            }
            
        }
        return {ans.first,ans.second};
    }
};