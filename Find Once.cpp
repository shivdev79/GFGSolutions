
class Solution {
  public:
    int findOnce(vector<int>& arr)
    {
        int result = 0;
        int n = arr.size();
        for(int i = 0 ; i < n ;i++){
            result^=arr[i];
        }
        return result;
    }
};
