#include<bits/stdc++.h>
using namespace std;

class Graph
{
    int V;
    list<int> *adj;
    bool isCyclicUtil(int v, bool visited[], int parent);
public:
    Graph(int V);
    void addEdge(int v, int w);
    bool isTree();
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
    adj[w].push_back(v);
}


bool Graph::isCyclicUtil(int v, bool visited[], int parent)
{

    visited[v] = true;

    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
    {

        if (!visited[*i])
        {
           if (isCyclicUtil(*i, visited, v))
              return true;
        }


        else if (*i != parent)
           return true;
    }
    return false;
}

bool Graph::isTree()
{

    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;


    if (isCyclicUtil(0, visited, -1))
             return false;

    for (int u = 0; u < V; u++)
        if (!visited[u])
           return false;

    return true;
}

int main(){

    vector<pair<int,int>> vvv;
    int n, a, b, x, y;
    cin>>n;

    cin>>a;
    for(int i=0 ;i<a ; i++){
        cin>>x>>y;
        vvv.push_back(make_pair(x,y));
    }
    cin>>b;
    for(int i=0 ;i<b ; i++){
        cin>>x>>y;
        vvv.push_back(make_pair(x,y));
    }

    sort(vvv.begin(), vvv.end());
    vvv.push_back(make_pair(0,0));
    int qq = a+b;
    int zzz=0;
    Graph g1(n);
    for(int i =0 ;i<qq; i++){
        int qqq= vvv[i].first;
        int www = vvv[i+1].first;
        int eee = vvv[i].second;
        int rrr = vvv[i+1].second;
        if((qqq==www) && (eee == rrr)){
            ++i;
        }else{
            g1.addEdge(qqq-1,eee-1);
        }
    }





    g1.isTree()? cout << "Pohon\n":
                 cout << "Bukan pohon\n";



}
