class Solution {
public:
    long long maximizeSumOfWeights(vector<vector<int>>& edges, int k) {
        int n = edges.size() + 1;
        vector<vector<pair<int,int>>> adj(n);
        for (auto& e : edges) {
            adj[e[0]].push_back({e[1], e[2]});
            adj[e[1]].push_back({e[0], e[2]});
        }
        
        function<pair<long long,long long>(int,int)> dfs = [&](int u, int par) -> pair<long long,long long> {
            vector<long long> gains;
            long long base = 0;
            
            for (auto [v, w] : adj[u]) {
                if (v == par) continue;
                auto [with, without] = dfs(v, u);
                base += without;
                gains.push_back(with + w - without);
            }
            
            sort(gains.rbegin(), gains.rend());
            
            long long without_u = base;
            for (int i = 0; i < min((int)gains.size(), k) && gains[i] > 0; i++)
                without_u += gains[i];
            
            long long with_u = base;
            for (int i = 0; i < min((int)gains.size(), k-1) && gains[i] > 0; i++)
                with_u += gains[i];
            
            return {with_u, without_u};
        };
        
        auto [with, without] = dfs(0, -1);
        return without;
    }
};