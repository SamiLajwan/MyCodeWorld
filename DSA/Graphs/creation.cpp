#include<bits/stdc++.h>
using namespace std;

class graph{
    public:
        unordered_map<int,list<int>>adjList;
        
        void addEdge(int u, int v, bool direction){
            //direction = 0 --> undirected graph
            //direction = 1 --> directed graph

            if(direction == 0){
                adjList[u].push_back(v);
                adjList[v].push_back(u);
            }
            else{
                //directed
                adjList[u].push_back(v);
            }
        }

        void printAdjList(int n){
            for(int i=0; i<n; i++){
                cout << i << ": ";
                cout << "{" ;
                list<int>temp = adjList[i];
                for(auto j: temp){
                    cout << j << ",";

                }
                cout << "}" << endl;
            }
        }

};


int main(){
    graph g;
    g.addEdge(0,1,1);
    g.addEdge(0,2,1);
    g.addEdge(1,2,1);
    g.addEdge(2,3,1);
    int n = 4;
    g.printAdjList(n);
    return 0;
}