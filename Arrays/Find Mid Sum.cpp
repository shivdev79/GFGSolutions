class Solution {
  public:
    int findMidSum(vector<int> &arr1, vector<int> &arr2) {
       int n = arr1.size();
       vector<int> ans;
       for(int i = 0; i < n; i++) {
           ans.push_back(arr1[i]);
           ans.push_back(arr2[i]);
       }
        sort(ans.begin() , ans.end());
        int z = ans.size();
        int a1 = ans[z/2];
        int a2 = ans[(z/2) -1];
            int c1 = (a1 + a2);
        return c1;
    }
};