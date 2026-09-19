class Solution {
  public:
    bool isPalindrome(vector<int> &arr) {
        int n = arr.size();
        int left = 0;
        int right = n - 1;
        while(left < right){
            if(arr[left] != arr[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};