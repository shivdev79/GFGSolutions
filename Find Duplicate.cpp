// User function Template for C++
class Solution {
  public:
    int findDuplicate(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int x = INT_MIN;
        int n = arr.size();
        for(int i = 0 ; i < n ; i++){
                if(arr[i]==arr[i+1]){
                    x = arr[i];
                }
            
        }
        return x;
    }
};