class Solution {
  public:
    int countIslands(vector<vector<char>>& grid) {
       int n = grid.size();
       int m = grid[0].size();
       int islands = 0;
       vector<vector<bool>> vis(n, vector<bool>(m, false));
       for(int i = 0 ; i < n ; i++){
           for(int j = 0 ; j < m ; j++){
               if(grid[i][j] == 'L' && !vis[i][j]){
                   dfs(i , j , vis , grid , n , m);
                   islands++;
               }
           }
       }
       return islands;
       
    }
    
    void dfs(int i , int j , vector<vector<bool>> &vis , vector<vector<char>>& grid , int n , int m ){
        if( i < 0 || j < 0 || i >= n || j >= m || grid[i][j] == 'W'  || vis[i][j]){
            return ;
        }
        vis[i][j] = true;
        // 8 directions
            // Up
            dfs(i - 1, j, vis, grid, n, m);

            // Down
            dfs(i + 1, j, vis, grid, n, m);

            // Left
            dfs(i, j - 1, vis, grid, n, m);

            // Right
            dfs(i, j + 1, vis, grid, n, m);

            // Diagonal: Top-left
            dfs(i - 1, j - 1, vis, grid, n, m);

            // Diagonal: Top-right
            dfs(i - 1, j + 1, vis, grid, n, m);

            // Diagonal: Bottom-left
            dfs(i + 1, j - 1, vis, grid, n, m);

            // Diagonal: Bottom-right
            dfs(i + 1, j + 1, vis, grid, n, m);
    }
};