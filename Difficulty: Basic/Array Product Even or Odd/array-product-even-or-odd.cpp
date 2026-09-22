class Solution {
  public:
    bool isProductEven(vector<int> &arr) {
        int n = arr.size();
        int prod = 1;
        for(int i = 0 ; i < n ; i++){
            prod = prod * arr[i];
        }
        if(prod % 2 == 0){
            return true;
        }
        else{
            return false;
        }
    }
};