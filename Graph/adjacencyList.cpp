#include<bits/stdc++.h>
using namespace std;

void addEdges(vector<int> adj[], int u , int v){
adj[u].push_back(v);
adj[v].push_back(u);
}

void printGraph(vector<int>adj[], int V){
    for(int i =0 ; i < V ; i++){
        cout<<" \n List of Vertex " <<i<< "\n head";
        for(auto x : adj[i]){
            cout<< "->"<< x;
        }
        printf("\n");
    }
}
int main(){
int V= 5;
vector<int> adj[V];

addEdges(adj, 0 ,1);
addEdges(adj, 0, 4);
addEdges(adj, 1, 3);
addEdges(adj, 1, 4);
addEdges(adj, 1, 2);
addEdges(adj, 2, 3);
addEdges(adj, 3, 4);

printGraph(adj, V);
return 0;
}
