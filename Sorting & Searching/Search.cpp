class Solution {
  public:
    bool search(vector<int>& arr, int key) {
        map<int , int> mpp;
        for(auto it : arr){
            mpp[it]++;
        }
        for(auto it : mpp){
            if(it.first == key){
                return true;
            }
        }
        return false;
    }
};