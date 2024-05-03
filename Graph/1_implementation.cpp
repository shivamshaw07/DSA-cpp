#include<bits/stdc++.h>
using namespace std;

class Graph{
    public:
    unordered_map<int, list<int> > adj;
    void addEdges(int u, int v, bool direction){
        //direction -> 0 = undirected
        //direction -> 1 = directed
        adj[u].push_back(v);
        if(!direction){
            adj[v].push_back(u);
        }
    }

    void printAdjList(){
        for(auto &i:adj){
            cout<<i.first<< " -> ";
            for(auto &j:i.second){
                cout<<j<< " ";
            }
            cout<<endl;
        }
    }
};

int main(){
    int n;
    cout<<"Enter the number of nodes -> ";
    cin >> n;
    int m;
    cout<<"Enter the number of edges -> ";
    cin >> m;

    Graph g;
    for(int i = 0; i < m; i++){
        int u, v;
        cin>> u >> v;

        //creating an undirected graph
        g.addEdges(u,v,0);
    }
    g.printAdjList();

    return 0;

}