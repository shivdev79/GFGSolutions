class Solution {
  public:
    // Function to find all pairs with given sum.
    vector<pair<int, int>> allPairs(int target, vector<int> &arr1, vector<int> &arr2) {
        vector <pair<int , int>> ans;
        sort(arr1.begin() , arr1.end());
        sort(arr2.begin() , arr2.end());
        int i = 0 , j = arr2.size() - 1;
        while( i < arr1.size() && j >=0 ){
            int sum = arr1[i] + arr2[j];
            if(sum == target){
                int a = arr1[i];
                int b = arr2[j];
                int cnt1 = 0;
                int cnt2 = 0;
                while( i < arr1.size() && arr1[i] == a){
                    cnt1++;
                    i++;
                }
                while( j >=0 && arr2[j] == b){
                    cnt2++;
                    j--;
                }
                for(int x = 0 ; x < cnt1 ; x++){
                    for(int y = 0 ; y < cnt2 ; y++){
                        ans.push_back({a,b});
                    }
                }
                
            }
            else if(sum < target){
                i++;
                
            }
            else{
                j--;
            }
        }
        return ans;
        
    }
};