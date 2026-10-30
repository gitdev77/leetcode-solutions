class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int perimeter = 0;
        int m = grid.size();
        int n = grid[0].size();
        int shared = 0;
        int land = 0;
        for(int i = 0; i < m; i++){
        for(int j = 0; j <n; j++){
           if(grid[i][j]==1){
            land++;
           
            if(j+1< n && grid[i][j+1] == 1){
                shared++;
            }
            if(i+1< m && grid[i+1][j]==1){
                shared++;
            }
            perimeter = 4 * (land) - 2 * (shared);
            }
        }
    }
        return perimeter;
    }
};