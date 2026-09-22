class Solution {
  public:
    bool fourSum(vector<int>& arr, int x) {
        int n = arr.size();
        sort(arr.begin() , arr.end());
        for(int i = 0  ; i < n ; i++){
            for(int j = i + 1 ; j < n ; j++){
                int left = j+ 1 ;
                int right = n -1;
                while(left < right){
                    int sum = arr[left] + arr[right] + arr[i] + arr[j];
                    if(sum == x){
                        return true;
                    }
                    else if(sum < x){
                        left++;
                    }
                    else{
                        right--;
                    }
                }
            }
        }
        return false;
    }
};