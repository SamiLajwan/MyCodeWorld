#include<bits/stdc++.h>
using namespace std;

class graph{
    public:
    unordered_map<int,list<pair<int,int>>>adj;
    void addEgde(int u, int v, int wt, bool direction){
        adj[u].push_back({v,wt});
        if(direction == 1){
            adj[v].push_back({u,wt});
        }
    }

    //standard dijkstra TC: O(v^2);
    //our implementation is TC: O(ElogV)

    void shortestDistDijkstra(int src, int n){
        vector<int>dist(n+1,INT_MAX);
        set<pair<int,int>>st;

        //initial state maintain
        dist[src] = 0;
        st.insert({0,src});

        //main logic
        while(!st.empty()){
            auto topElem = *(st.begin());
            int topNodeDistance = topElem.first;
            int topNode = topElem.second;
            //pop this node
            st.erase(st.begin());
            //neighbor pr jao
            for(auto nbr: adj[topNode]){
                int nbrNode = nbr.first;
                int nbrDist = nbr.second;
                if(dist[topNode]+nbrDist < dist[nbrNode]){
                    //2 kaam krne hai
                    //update distance array and set
                    auto result = st.find({dist[nbrNode],nbrNode});
                    if(result != st.end()){
                        //entry found -> remove this entry
                        st.erase(result);
                    }
                    dist[nbrNode] = dist[topNode]+nbrDist;
                    st.insert({dist[nbrNode],nbrNode});
                }
            }
        }
        cout << "Printing the result" <<endl;
        for(int i=0; i<n; i++){
            cout << dist[i] << " ";
        }
    }
};

int main(){
    graph g;
    g.addEgde(0,5,9,1);
    g.addEgde(0,3,6,1);
    g.addEgde(5,4,2,1);
    g.addEgde(4,3,11,1);
    g.addEgde(5,1,14,1);
    g.addEgde(4,1,9,1);
    g.addEgde(4,2,10,1);
    g.addEgde(3,2,15,1);
    g.addEgde(2,1,7,1);

    g.shortestDistDijkstra(0,6);

    return 0;
}