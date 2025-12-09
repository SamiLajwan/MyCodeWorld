#include<bits/stdc++.h>
using namespace std;

class Graph{
    public:
    unordered_map<int,list<pair<int,int>>>adj;

    void addEdge(int u, int v, int wt, bool direction){
        if(direction == 0){
            adj[u].push_back({v,wt});
            adj[v].push_back({u,wt});
        }
        else{
            adj[u].push_back({v,wt});
        }
    }

    // void printAdjList(int n){
    //     for(int i=0; i<n; i++){
    //         cout << i << ":{";
    //         for(auto j: adj[i]){
    //             cout << j << ", ";
    //         }
    //         cout << "}" << endl;
    //     }
    // }
    
    void topoSortDfs(int src, unordered_map<int, bool>& visited, stack<int>& ans) {
        visited[src] = true;
        for(auto neighbour: adj[src]) {
            if(!visited[neighbour.first] ) {
                topoSortDfs(neighbour.first, visited, ans);
            }
        }
        // backtrack
        //while returning, store the node in stack
        //cout << "Pushing " << src << endl;
        ans.push(src);
    }
    
    void shortestPathDFS(int src){
        stack<int>topoOrder;
        unordered_map<int,bool>vis;

        topoSortDfs(src, vis, topoOrder);

        //ab mere pass topo order a stack ready hai
        int n = topoOrder.size();
        vector<int>dist(n, INT_MAX);

        //initial state maintain
        src = topoOrder.top();
        topoOrder.pop();
        dist[src]=0;
        //and src ke neighbour k min distance ko update krte ho
        
        for(auto nbr: adj[src]){
            //nbr ->{a,b}
            //a->node, b->wt

            int node = nbr.first;
            int wtDist = nbr.second;

            if(dist[src] + wtDist < dist[node]){
                //update weight
                dist[node] = dist[src] + wtDist;
            }
        }
        //main logic
        while(!topoOrder.empty()){
            int frontNode = topoOrder.top();
            topoOrder.pop();

            for(auto nbr: adj[frontNode]){
                int node = nbr.first;
                int wtDist = nbr.second;

                if(dist[frontNode] + wtDist < dist[node]){
                    dist[node] = dist[frontNode] + wtDist;
                }
            }
        }

        cout << "Printing Distance array: " << endl;
        for(auto i: dist){
            cout << i << " ";
        }
        cout << endl;
    }
};

int main(){
    Graph g;
    
    g.addEdge(0,1,5,1);
    g.addEdge(0,2,13,1);
    g.addEdge(0,4,3,1);
    g.addEdge(1,2,7,1);
    g.addEdge(1,4,1,1);
    g.addEdge(4,3,6,1);
    g.addEdge(3,2,2,1);

    g.shortestPathDFS(0);

    return 0;
}
