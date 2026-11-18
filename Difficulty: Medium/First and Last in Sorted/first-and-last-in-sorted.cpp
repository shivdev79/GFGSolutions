class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        int ans1 = -1;
        int ans2 = -1;
        int n = arr.size();
        int c1 = firstocc(arr , n , x , ans1);
        int c2 = lastocc(arr , n , x , ans2);
        vector <int> ans;
        ans.push_back(c1);
        ans.push_back(c2);
        return ans;
    }
    int firstocc(vector <int>&arr , int n ,  int x , int ans1 ){
        int low = 0;
        int high  = n - 1;
        while(low <= high){
          int mid = (low + high)/2;  
          if(arr[mid] == x){
              ans1 = mid;
              high = mid - 1;
              
          }
          else if(arr[mid] < x){
              low = mid + 1;
          }
          else{
              high = mid -1;
          }
          
        }
        return ans1;
    }
    int lastocc(vector <int>& arr ,int n , int x , int ans2){
        int low = 0;
        int high = n - 1;
        while(low <= high){
            int mid = (low + high)/2;
            if(arr[mid] == x){
                ans2 = mid;
                low = mid + 1;
            }
            else if(arr[mid] < x){
                low = mid + 1;
            }
            else{
                high = mid -1;
            }
            
        }
        return ans2;
    }
};