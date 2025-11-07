#include <bits/stdc++.h>
using namespace std;

class Graph {
public:
    unordered_map<int, vector<pair<int, int>>> adj;  // node -> [(neighbour, weight)]

    void addEdge(int u, int v, int w, bool directed) {
        adj[u].push_back({v, w});
        if (!directed)
            adj[v].push_back({u, w});
    }

    void BFS(int start) {
        unordered_map<int, bool> visited;
        queue<int> q;

        q.push(start);
        visited[start] = true;

        cout << "BFS Traversal starting from " << start << ": ";

        while (!q.empty()) {
            int node = q.front();
            q.pop();
            cout << node << " ";

            for (auto neighbor : adj[node]) {
                int nextNode = neighbor.first;
                if (!visited[nextNode]) {
                    visited[nextNode] = true;
                    q.push(nextNode);
                }
            }
        }
        cout << endl;
    }
};

int main() {
    Graph g;
    g.addEdge(1, 2, 2, false);
    g.addEdge(1, 3, 4, false);
    g.addEdge(2, 3, 1, false);

    g.BFS(1);
    return 0;
}
