class Solution {
public:

   bool checkbpdfs(vector<vector<int>> & adj, int curr, vector<int>& color, int currcolor){
        color[curr] = currcolor;
        //ab jate hai adj nodes par
        for(int v: adj[curr]){
            if(color[v]==color[curr]){
                return false;
            }
            
            if(color[v]==-1){//never coloured
            int colorofv = 1 - currcolor;
            if(checkbpdfs(adj, v, color, colorofv) == false){
             return false;
            }

        
        }
    }
    return true;
   
   }
   
   
    bool isBipartite(vector<vector<int>>& graph) {
        int V = graph.size();
        vector<int> color(V,-1);
        //red = 0;
        // green = 1
for(int i = 0; i < V ; i ++){
    if(color[i]==-1){
        if(checkbpdfs(graph,i,color,1) == false)
        return false;//not bp

    
            }
        }
    
return true;

    }

};