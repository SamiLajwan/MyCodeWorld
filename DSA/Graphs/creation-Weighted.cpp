#include<bits/stdc++.h>
using namespace std;

class graph{
    public:
        unordered_map<int,list<pair<int,int>>>adjList;
        
        void addEdge(int u, int v,int weight, bool direction){
            //direction = 0 --> undirected graph
            //direction = 1 --> directed graph

            if(direction == 0){
                adjList[u].push_back({v,weight});
                adjList[v].push_back({u,weight});
            }
            else{
                //directed
                adjList[u].push_back({v,weight});
            }
        }

        void printAdjList(int n){
            for(int i=0; i<n; i++){
                cout << i << ": ";
                cout << "{" ;
                list<pair<int,int>>temp = adjList[i];
                for(auto j: temp){
                    cout << "(" << j.first << "," << j.second << ")," ;

                }
                cout << "}" << endl;
            }
        }

};


int main(){
    graph g;
    g.addEdge(0,1,3,1);
    g.addEdge(0,2,5,1);
    g.addEdge(1,2,1,1);
    g.addEdge(2,3,16,1);
    int n = 4;
    g.printAdjList(n);
    return 0;
}