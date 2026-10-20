class Solution {
  public:
    int minimumDifference(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        vector <int> store1;
        for(int i = 1 ; i < n ; i++){
            int z = arr[i] - arr[i-1];
            store1.push_back(z);
        }
        sort(store1.begin() , store1.end());
        int k = store1[0];
        return k;
    }
};