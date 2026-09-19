// User function template for C++

class Solution {
  public:
    // Function to find all combinations of elements
    // in array arr that sum to target.
    vector<vector<int>> combinationSum(vector<int> &arr, int target) {
        int n = arr.size();
        vector <int> current;
        vector<vector<int>> storebig;
        solution(0,arr , current , storebig , target , n);
        set<vector<int>> rs1(storebig.begin() , storebig.end());
        vector<vector<int>> acc(rs1.begin() , rs1.end());
        return acc;
    }
    void solution(int index , vector <int> &arr , vector <int> &current , vector<vector<int>> &storebig , int target , int n ){
        if(index == arr.size() || target < 0){
            return;
        }
        if(target == 0){
                storebig.push_back(current);
                 return ;
            }
        current.push_back(arr[index]);
        solution(index + 1 , arr , current , storebig , target - arr[index] , n );
        solution(index , arr , current , storebig , target - arr[index], n );
        current.pop_back();
        solution(index + 1 , arr , current , storebig , target , n);
    }
};