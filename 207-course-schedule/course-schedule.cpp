class Solution {
public:
bool topologicalsortcheck(unordered_map<int,vector<int>> &adj, int n, vector<int> & indeg){
    queue<int> q;
    int count = 0;
    for(int i = 0; i < n; i ++){
        if(indeg[i]==0){
            q.push(i);
        }
    }
        while(!q.empty()){

         int u = q.front();
         q.pop();
         count++;

        for(int &v : adj[u]){
            indeg[v]--;
            if(indeg[v]==0){
               
                q.push(v);
            }

        }
    }

        if(count == n){
    return true;
}
else{
    return false;
}
}
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
         unordered_map<int,vector<int>> adj;
         vector<int> indeg(numCourses,0);
         for(auto & vec : prerequisites){
            int a = vec[0];
            int b = vec[1];
            adj[b].push_back(a);// b se arrow jayega a
            //arrow going to a
            indeg[a]++; // so indeg a ka badhega
            //if cycle is not possible
         }
            return topologicalsortcheck(adj,numCourses,indeg);
         
    }
};