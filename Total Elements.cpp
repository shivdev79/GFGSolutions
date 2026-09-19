#include<algorithm>
class Solution {
  public:
    int totalElements(vector<int> &arr) {
        int l = 0;
        int r = 0;
        unordered_map<int, int> mpp;
        int len = 0;
        int maxlen = 0;
        int k = 2;
        int n = arr.size();
        while( r < n ){
            mpp[arr[r]]++;
            while(mpp.size() > 2){
                mpp[arr[l]]--;
                if(mpp[arr[l]] == 0){
                    mpp.erase(arr[l]);
                }
                l = l + 1;
            }
            if(mpp.size() <= k){
                len = r - l + 1;
                maxlen = max(maxlen , len);
            }
            r = r+ 1;
        }
        return maxlen;
        
    }
};