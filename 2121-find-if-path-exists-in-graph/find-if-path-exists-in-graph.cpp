class Solution {
    private:
    void dfs(int node, vector<vector<int>>& adj, vector<int>& vis){
        vis[node] = 1; //1
        for(auto it : adj[node]){
            if(!vis[it]){
                dfs(it,adj,vis);
            }
        }
    }
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
       vector<vector<int>> adj(n);
        vector<int> vis(n,0);
        for(auto edge : edges){
          adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        dfs(source, adj, vis);
        if(vis[destination]==1){
            return true;
        }
        else{
            return false;
        }

    }
};