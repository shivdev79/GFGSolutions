// User function Template for C++

class Solution {

  public:
    vector<vector<int>> printUniqueSubsets(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin() , nums.end());
        vector<int> current;
        vector<vector<int>> solution;
        subsequences(0, nums, current , solution , n);
        set<vector<int>> rs1(solution.begin() , solution.end());
        vector<vector<int>> ans(rs1.begin() , rs1.end());
        return ans;
        
    }
    void subsequences(int index ,vector <int> &nums , vector <int> &current , vector<vector<int>> &solution , int n){
        if(index >= n){
            solution.push_back(current);
            return ;
        }
        current.push_back(nums[index]);
        subsequences(index + 1 , nums , current , solution , n);
        current.pop_back();
        subsequences(index + 1, nums , current , solution , n);
        
    }
    
};