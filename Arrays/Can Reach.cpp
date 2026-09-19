class Solution {
  public:
    // Function to check if we can reach the last index from 0th index.
    bool canReach(vector<int> &arr) {
        int maxindex = 0;
        for(int i = 0 ; i < arr.size() ; i++){
            if(i  > maxindex){
                return false;
            }
            maxindex = max(maxindex , i + arr[i]);
        }
        return true;
    }
};