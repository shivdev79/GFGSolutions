class Solution {
  public:
    int countXorPair(vector<int>& arr) {
        int n = arr.size();
        int evens = 0;
        int odds = 0;
        for(int i = 0 ; i < n ;i++){
            if(arr[i] % 2 == 0){
                evens ++;
            }
            else{
                odds++;
            }
        }
        return evens * odds;
        
    }
};