class Solution {
  public:
  int linearsearch(int element , vector <int> &original, int start){
      for(int i = 0 ; i < original.size() ; i++){
          if(original[i] == element){
              return i;
          }
      }
      return -1;
  }
    vector<vector<int>> findTriplets(vector<int> &arr) {
        int n = arr.size();
        vector <int> original = arr;
        vector<vector<int>> ans;
        sort(arr.begin() , arr.end());
        for(int i = 0 ; i < n ; i++){
            if( i > 0 && arr[i] == arr[i-1]){
                continue;
            }
            int left = i + 1;
            int right = n - 1;
            while(left < right){
                int sum = arr[i] + arr[left] + arr[right];
                if(sum == 0){
                    int index1 = linearsearch(arr[i], original ,0);
                    int index2 = linearsearch(arr[left] , original , index2 + 1);
                    int index3 = linearsearch(arr[right] , original, index3 + 2);
                    vector<int> temp = {index1, index2, index3};
                    sort(temp.begin(), temp.end());
                    ans.push_back(temp);
                    left++;
                    right--;
                    while( left < right && arr[left] == arr[left -1]){
                        left++;
                    }
                }
                else if(sum  < 0){
                    left++;
                }
                else if(sum > 0){
                    right--;
                }
            }
        }
        return ans;
    }
};