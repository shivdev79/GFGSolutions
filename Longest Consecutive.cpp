class Solution {
  public:
    int longestConsecutive(vector<int>& arr) {
        sort(arr.begin() , arr.end());
        int cnt = 0;
        int n = arr.size();
        int lastsmaller = INT_MIN;
        int longest = 0;
        for(int i = 0 ; i < n  ; i++){
            if(arr[i] - 1 == lastsmaller){
                cnt = cnt + 1;
                lastsmaller = arr[i];
            }
            else if(arr[i] != lastsmaller){
                cnt = 1;
                lastsmaller = arr[i];
            }
            longest = max(longest , cnt);
        }
        return longest;
        
    }
};