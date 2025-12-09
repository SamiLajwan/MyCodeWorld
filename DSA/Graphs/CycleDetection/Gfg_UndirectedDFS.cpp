// using DFS
class Solution {
  public:
    bool checkCycleDFSHelper(int src, unordered_map<int,bool>&vis, vector<int>adj[], int parent){
        vis[src] = true;
        
        for(auto nbr: adj[src]){
            if(!vis[nbr]){
                bool ans = checkCycleDFSHelper(nbr,vis,adj,src);
                if(ans == true) return true;
            }
            else if(vis[nbr] == true && nbr!=parent){
                return true;
            }
        }
        return false;
    }

    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        // Handle disconnected components
        int n = V;
        int ans = false;
        unordered_map<int,bool>visited;
        int parent = -1;
        for(int i = 0; i<V;i++){
            if(!visited[i]){
                ans = checkCycleDFSHelper(i,visited,adj,parent);
                if(ans) break;
            }
        }
        return ans;
    }
};
