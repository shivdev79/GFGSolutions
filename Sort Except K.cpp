
class Solution {
  public:
    void sortExceptK(vector<int>& arr, int k) {
        vector <int> ans;
        int n = arr.size();
        for(int i = 0 ; i < n ; i++){
            if( i != k){
                ans.push_back(arr[i]);
            }
        }
        sort(ans.begin() , ans.end());
        int j = 0;
        for(int i = 0 ; i < n;  i++ ){
            if(i != k ){
                arr[i] = ans[j++];
            }
        }
    }
};

