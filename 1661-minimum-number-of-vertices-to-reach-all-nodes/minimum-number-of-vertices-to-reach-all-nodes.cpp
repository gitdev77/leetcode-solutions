class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<bool> indeg(n,false);
        for(auto &edge : edges){
            int u = edge[0];
            int v = edge[1];
            //u-->v
            indeg[v] = true;
        
        }
        vector<int> result;
        for (int i = 0; i < n ; i ++){//bool array traverse
            if(indeg[i]==false){
                result.push_back(i);
            }
        }
        return result;
    }
};