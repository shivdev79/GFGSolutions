//Back-end complete function Template for C++

class Solution {
  public:
    int countZeros(vector<vector<int>> A) {
        int n = A.size();
        int m = A[0].size();
        vector <int> zero;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(A[i][j]==0){
                    zero.push_back(A[i][j]);
                }
            }
        }
        int x = zero.size();
        return x;
    }
};