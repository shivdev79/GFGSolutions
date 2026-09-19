// User function Template for C++
class Solution {
  public:
    vector<vector<int>> distinctPairs(vector<int> &arr, int target) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int start = 0;
        int end = n -1;
        set <vector<int>> s1;
        while(start < end){
            int sum = arr[start] + arr[end];
            if(sum == target){
                s1.insert({arr[start],arr[end]});
                start++;
                end--;
            }
            else if(sum < target){
                start++;
            }
            else{
                end--;
            }
        }
        vector <vector<int>> ans(s1.begin(), s1.end());
        return ans;
    }
};