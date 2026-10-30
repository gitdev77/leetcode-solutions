class Solution {
public:
    int dfs(vector<vector<int>>& grid, int i, int j,vector<vector<int>> & vis){
       int  n = grid.size();
       int  m = grid[0].size();
        if(i < 0 || i >=n || j < 0 || j >=m){
            return 0;
        }
        if(vis[i][j]==1){
            return 0;
        }
        if(grid[i][j]==0){
            return 0;
        }
        vis[i][j]=1;
        int area = 1;
        area = area + dfs(grid,i+1,j,vis);
        area = area + dfs(grid,i-1,j,vis);
        area = area + dfs(grid,i,j+1,vis);
        area = area + dfs(grid,i,j-1,vis);
        
        return area; 
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
    int  n = grid.size();
       int  m = grid[0].size();
        
        vector<vector<int>> vis(n, vector<int>(m, 0));
        int maxi = 0;
    for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
        int area = dfs(grid,i,j,vis);
        maxi = max(maxi,area);
    }
    }
    
 return maxi;
    }

};