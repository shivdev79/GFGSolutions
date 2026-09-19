class Solution {
  public:
    bool isPalinArray(vector<int> &arr) {
        int n = arr.size();
        for(int i = 0 ; i  < n ; i++){
            if(!palincheck(arr[i])){
                return false;
            }
        }
        return true;
    }
    bool palincheck(int n){
        int temp = n;
        int rev = 0;
        while(temp > 0){
            rev = rev*10 + temp % 10;
            temp = temp / 10;
        }
        return rev == n;
    }
    
};