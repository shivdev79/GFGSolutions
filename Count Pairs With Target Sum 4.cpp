
class Solution {
  public:
    int countPairs(vector<int>& arr1, vector<int>& arr2, int x) {
        sort(arr1.begin() , arr1.end());
        sort(arr2.begin() , arr2.end());
        int i = 0 ;
        int j = arr2.size() - 1;
        int count = 0;
        while( i < arr1.size() && j >= 0){
            int sum = arr1[i] + arr2[j];
            if(sum == x){
                count ++;
                i++;
                j--;
            }
            else if(sum < x){
                i++;
            }
            else{
                j--;
            }
        }
        return count;
    }
};