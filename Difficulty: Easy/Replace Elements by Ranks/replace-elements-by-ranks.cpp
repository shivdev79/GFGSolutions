class Solution {
  public:
    void replaceWithRank(vector<int>& arr) {
        int n = arr.size();
        vector <pair<int , int>> v1;
        for(int  i = 0 ; i <  n ; i++){
            v1.push_back({arr[i] , i});
        }
        sort(v1.begin() , v1.end());
        for(int i = 0 ; i < n ; i++){
            arr[v1[i].second] = i ;
        }
        
    }
};