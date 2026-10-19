class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
            int m = grid.size(), n = grid[0].size();
            
    
        queue<pair<int,int>> q;
        int fresh = 0;
        for(int i = 0; i < m; i ++){
            for(int j = 0; j < n; j ++){
                if(grid[i][j]==2){
                    q.push({i,j});
                  }else if (grid[i][j] == 1){
                        fresh++;
                }
            }
        }
            int dr[] = {-1, 1, 0, 0};
            int dc[] = {0, 0, -1, 1};
            int mins = 0;
        while(!q.empty() && fresh > 0){
            int size = q.size();
           
            for(int i = 0; i < size; i ++){

            int r = q.front().first;
            int c = q.front().second;
            q.pop(); // we done processing it
            for(int k = 0; k < 4; k ++){
                int nr = r + dr[k];
                int nc = c + dc[k];
                     if(nr >=0 && nr < m && nc >= 0 && nc < n &&
                     grid[nr][nc]==1){
                      grid[nr][nc]=2;
                      fresh--;
                      q.push({nr,nc});
        
                    }
                }     
            }
             
             mins++;
            }
            return fresh == 0 ? mins : -1;
        }
};