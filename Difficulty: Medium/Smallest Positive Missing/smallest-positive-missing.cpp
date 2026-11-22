class Solution {
  public:
    int missingNumber(vector<int> &arr) {
        vector <int> store;
        for(auto it : arr){
            if(it > 0){
                store.push_back(it);
            }
        }
        sort(store.begin() , store.end());
        int missing = 1;
        for(int i = 0 ; i < store.size() ; i++){
            if(store[i] == missing){
                missing++;
            }
        }
        return missing;
    }
};