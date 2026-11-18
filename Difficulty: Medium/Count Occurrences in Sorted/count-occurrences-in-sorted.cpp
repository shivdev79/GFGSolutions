class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        int ans1 = -1;
        int ans2 = -1;
        int n = arr.size();
        int z1 = firstocc(arr , n , target , ans1);
        int z2 = lastocc(arr , n , target , ans2);
        int cnt = z2 - z1 + 1;
        if(z1 == -1) return 0;
        return cnt;
    }
    int firstocc(vector <int>&arr , int n , int target , int ans1){
        int low = 0;
        int high = n - 1;
        while(low <= high){
            int mid = (low + high)/2;
            if(arr[mid] == target){
                ans1 = mid;
                high = mid - 1;
            }
            else if(arr[mid] < target){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return ans1;
    }
    int lastocc(vector <int> &arr , int n , int target , int ans2){
        int low = 0;
        int high = n - 1;
        while(low <= high){
            int mid = (low + high)/2;
            if(arr[mid] == target){
                ans2 = mid ;
                low = mid + 1;
            }
            else if(arr[mid] < target){
                low = mid + 1;
            }
            else{
                high = mid  - 1;
            }
        }
        return ans2;
    }
    
};
