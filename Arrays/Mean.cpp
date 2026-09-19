class Solution {
  public:
    int mean(vector<int>& arr) {
        int n = arr.size();
        int sum = 0;
        for(int i = 0 ; i < n ; i++){
            sum = sum + arr[i];
        }
        int z = sum/n;
        return z;
    }

    int median(vector<int>& arr) {
        sort(arr.begin() , arr.end());
        int n = arr.size();
        if( n % 2 == 0){
            int z = (arr[n/2] + arr[n/2 -1])/2;
            return z;
        }
        else{
            int x = (arr[n/2]);
            return x;
        }
        
    }
};