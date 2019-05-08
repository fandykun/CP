#include <bits/stdc++.h>
using namespace std;

enum DFSCOLOR { WHITE, GRAY, BLACK};
vector<vector<string> > graph;
vector<int> visited;
map<string, int> ind;

bool Visit(int u){
    int length; string next;
    visited[u] = GRAY;
    length = graph[u].size();
    for(int i = 0;i < length; i++){
        next = graph[u][i];
        if( (ind.find(next) ==ind.end() ) || visited[ind[next]]==GRAY) 
            return false;
        else if(visited[ind[next]] == WHITE){
            bool cek =  Visit(ind[next]);
            if(!cek) return false;
        }
    }
    visited[u] = BLACK;
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; int it = 0, cnt = 0;
    while(cin >> s){
        ind[s]=it;
        it++;
        vector<string> tmp;
        while(cin >> s, s != "0") tmp.push_back(s);
        graph.push_back(tmp);
        visited.push_back(WHITE);
    }
    for(int i = 0;i < graph.size(); i++) 
        if(visited[i] == WHITE) Visit(i);
    for(int i = 0;i < graph.size(); i++) 
        if(visited[i] == BLACK) cnt++;
    cout << cnt << endl;
    return 0;
}
