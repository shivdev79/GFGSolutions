// User function template for C++

class Solution {
  public:
    int countZeroes(vector<int> &arr) {
        vector <int> ans;
        int n = arr.size();
        int count = 0 ;
        for (int i = 0 ; i <  n ; i++){
            if(arr[i]==0){
                count++;
            }
        }
        int z = ans.size();
        return count; 
    }
};