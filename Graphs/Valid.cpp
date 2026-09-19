class Solution {
  public:
  int x[4] = { 1 , -1 , 0 , 0};
  int y[4] = { 0, 0, 1 , -1};
  bool valid( int i , int j , int n , int m){
      if(i < 0 || j < 0 || i >= n || j >= m){
          return false;
      }
      return true;
      
  }
  void dfs(vector<vector<char>>& grid , int n , int m , int i , int j){
      grid[i][j] = '#';
      for(int k = 0 ; k < 4 ; k++){
          int row = i + x[k];
          int col = j + y[k];
          if(valid(row , col , n , m) && grid[row][col] == 'O'){
              dfs(grid , n , m , row , col);
          }
      }
      return ;
  }
    void fill(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int i , j;
        //first row
        for(int j = 0; j < m; j ++){
            if(grid[0][j] == 'O'){
                dfs(grid , n , m , 0 , j);
            }
        }
        //last row
        for(int j = 0; j < m; j ++){
            if(grid[n-1][j] == 'O'){
                dfs(grid , n , m , n-1 , j);
            }
        }
        //first column
        for(int i = 0; i < n; i ++){
            if(grid[i][0] == 'O'){
                dfs(grid , n , m , i , 0);
            }
        }
        //last column
        for(int i = 0; i < n; i ++){
            if(grid[i][m-1] == 'O'){
                dfs(grid , n , m , i , m-1);
            }
        }
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(grid[i][j] == '#'){
                    grid[i][j] = 'O';
                }
                else if(grid[i][j] == 'O'){
                    grid[i][j] = 'X';
                }
            }
        }
        
    }
};












