class Solution {
public:
vector<vector<int>> dir {{0,1},{1,0},{0,-1},{-1,0}};
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int m = maze.size();// rows
        int n = maze[0].size();// col
        queue <pair <int,int>> q;
        q.push({entrance[0],entrance[1]});
         maze[entrance[0]][entrance[1]] = '+';
          int steps = 0;
        while(!q.empty()){
            int N = q.size();
            
            while(N--){
                pair<int,int> temp = q.front();
                q.pop();
                int i = temp.first;
                int j = temp.second;
                if(temp!=make_pair(entrance[0],entrance[1]) && (i == 0 || i == m-1 || j == 0 || j == n-1 ))
                return steps;
                for(int k = 0; k < 4; k++){
                    
                    int new_i =  i + dir[k][0];
                    int new_j =  j + dir[k][1];
                if(new_i >=0  && new_i < m && new_j>=0 && new_j <n && maze[new_i][new_j]!= '+'){
                    q.push(make_pair(new_i,new_j));
                    maze[new_i][new_j]='+';
                }

                }

            }
            steps++;
        }


        
        return -1;


    }
};