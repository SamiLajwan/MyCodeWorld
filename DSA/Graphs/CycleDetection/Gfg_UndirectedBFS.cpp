#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool cycleDetectionUndirectedBFS(int src, unordered_map<int,bool>& visited, unordered_map<int, list<int>>& adjList) {
        queue<int> q;
        unordered_map<int,int> parent;
        
        q.push(src);
        visited[src] = true;
        parent[src] = -1;
        
        while(!q.empty()) {
            int frontNode = q.front();
            q.pop();
            
            for(auto nbr : adjList[frontNode]) {
                if(!visited[nbr]) {
                    q.push(nbr);
                    visited[nbr] = true;
                    parent[nbr] = frontNode;
                }
                else if(visited[nbr] && nbr != parent[frontNode]) {
                    // cycle present
                    return true;
                }
            }
        }
        return false;
    }

    bool isCycle(int V, vector<vector<int>>& edges) {
        // Step 1: Convert edge list to adjacency list
        unordered_map<int, list<int>> adjList;
        for(auto edge : edges) {
            int u = edge[0];
            int v = edge[1];
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }

        // Step 2: Cycle detection
        unordered_map<int,bool> visited;
        for(int i = 0; i < V; i++) {
            if(!visited[i]) {
                if(cycleDetectionUndirectedBFS(i, visited, adjList)) {
                    return true;
                }
            }
        }
        return false;
    }
};
