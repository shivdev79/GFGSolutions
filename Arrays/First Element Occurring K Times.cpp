class Solution {
  public:
    int firstElement(vector<int>& arr, int k) {
        map <int , int> mpp;
        for(auto it : arr){
            mpp[it]++;
        }
        for(auto it : arr){
            if(mpp[it] == k){
                return it;
            }
        }
        return -1;
    }
};