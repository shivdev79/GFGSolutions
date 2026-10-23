class Solution {
  public:
    bool sumExists(vector<int> &arr, int sum) {
        sort(arr.begin() , arr.end());
        int n = arr.size() ;
        int i = 0;
        int j = n - 1;
        while( i < j){
            int sum1 = arr[i] + arr[j];
            if(sum1 == sum){
                return true;
            }
            else if(sum1 < sum){
                i++;
            }
            else{
                j--;
            }
        }
        return false;
    }
};