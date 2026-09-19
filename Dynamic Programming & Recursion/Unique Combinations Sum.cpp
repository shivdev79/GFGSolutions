// User function template for C++

class Solution {
  public:
    // Function to find all combinations of elements
    // in array arr that sum to target.
    vector<vector<int>> uniqueCombinations(vector<int> &arr, int target) {
        vector <int > current ; 
        vector<vector<int>> storebig;
        sort(arr.begin() , arr.end());
        int n = arr.size();
        sequences(0 , arr , current , storebig , target , n );
        return storebig;
        
    }
    void sequences( int index , vector<int> &arr , vector <int>  &current , vector<vector<int>> &storebig , int target ,  int n  ){
        if(target == 0){
            storebig.push_back(current);
            return;
        }
        if(index >= n || target < 0){
            return ;
        }
        current.push_back(arr[index]);
        sequences(index + 1 , arr , current , storebig ,  target - arr[index] , n );
        current.pop_back();
        int next = index + 1;
        while (next < n && arr[next] == arr[index]) next++;
        sequences(next, arr, current, storebig, target, n);
        
    }
};