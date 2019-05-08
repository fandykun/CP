#include <bits/stdc++.h>
using namespace std;

enum DFSCOLOR { WHITE, GRAY, BLACK };
vector<int> TopoSort, visited;
vector< vector<int> > graph;
bool ok;

void TopoVisit(int u){
    int length, next;
    visited[u] = GRAY;
    length = graph[u].size();
    for(int i = length-1;i >= 0; i--){
        next = graph[u][i];
        if(visited[next] == WHITE) TopoVisit(next);
        else if(visited[next] == GRAY){
            printf("Sandro fails.\n");
            exit(0);
        }
    }
    visited[u] = BLACK;
    TopoSort.push_back(u);
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, length, from, to;
    cin >> n >> m;
    graph.resize(n+1), visited.resize(n+1);
    for(int i = 0;i < m;i++){
        cin>>from>>to;
        graph[from].push_back(to);
    }
    for(int i = n;i >= 1;i--){
        visited.push_back(WHITE);
        sort(graph[i].begin(),graph[i].end());
    }
    for(int i = n;i >= 1;i--) if(visited[i] == WHITE) TopoVisit(i);
    for(int i = n-1; i>=1; i--) cout<<TopoSort[i]<<" ";
    cout<<TopoSort[0]<<endl;
    return 0;
}
