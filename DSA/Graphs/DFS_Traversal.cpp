#include <bits/stdc++.h>
using namespace std;

class Graph {
public:
    unordered_map<int, list<pair<int, int>>> adjList;

    void addEdge(int u, int v, int weight, bool direction) {
        // direction == 1 → directed
        if (direction == 0) {
            adjList[u].push_back({v, weight});
            adjList[v].push_back({u, weight});
        } else {
            adjList[u].push_back({v, weight});
        }
    }

    void dfsHelper(int src, unordered_map<int, bool>& visited) {
        visited[src] = true;
        cout << src << "->";

        for (auto nbr : adjList[src]) {
            int nextNode = nbr.first;
            if (!visited[nextNode]) {
                dfsHelper(nextNode, visited);
            }
        }
    }

    void dfsTraversal(int start, int n) {
        unordered_map<int, bool> visited;

        cout << "DFS Traversal: ";
        dfsHelper(start, visited);

        // for disconnected parts
        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                dfsHelper(i, visited);
            }
        }
        cout << endl;
    }
};

int main() {
    Graph g;
    g.addEdge(0,3,3,1);
    g.addEdge(0,5,3,1);
    g.addEdge(0,2,3,1);
    g.addEdge(3,5,3,1);
    g.addEdge(5,4,3,1);
    g.addEdge(4,1,3,1);
    g.addEdge(1,6,3,1);
    g.addEdge(6,2,3,1);

    int n = 7;
    g.dfsTraversal(0, n);
    return 0;
}
