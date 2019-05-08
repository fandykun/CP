#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, int> LLi;

const int dr[]={-1,1,0,0};
const int dc[]={0,0,1,-1};
int grid[3][3];
map<ll, LLi> dist;
ll target;

inline bool inborder(int i, int j){
    return i >= 0 && i < 3 && j >= 0 && j < 3;
}

void swap(int a[3][3], int i, int j, int ni, int nj){
    int tmp = a[i][j];
    a[i][j] = a[ni][nj];
    a[ni][nj] = tmp;
}

int getpostfrommask(ll mask, int number, bool isline){
    ll gtshift = 6*number;
    int offset = isline ? 0 : 3;
    for(int i=offset; i < 3+offset; i++){
        ll b = 1ll << (gtshift + i);
        if(b & mask) return i - offset;
    }
    return -1;
}

void getmatrikfrommask(ll mask, int m[3][3]){
    for(int i=0 ; i<9;i++){
        int l = getpostfrommask(mask, i, true);
        int c = getpostfrommask(mask, i, false);
        m[l][c] = i;
    }
}

ll getmaskfrommatriks(int m[3][3]){
    ll mask = 0;
    for(int i=0; i<3; i++){
        for(int j=0;j<3;j++){
            ll gtshift = m[i][j]*6;
            ll lmask = 1ll << (gtshift + i);
            ll cmask = 1ll << (gtshift + 3 + j);
            mask |= lmask | cmask;
        }
    }
    return mask;
}

int bfs(){
    queue<ll> que;
    ll pos = getmaskfrommatriks(grid);
    dist[pos] = LLi(-1, 0);
    que.push(pos);
    while(!que.empty()){
        ll u = que.front(); que.pop();
        int du = dist[u].second;
        if (u == target) return du;
        int r = getpostfrommask(u, 0, true);
        int c = getpostfrommask(u, 0, false);
        int m[3][3]; getmatrikfrommask(u, m);
        int m2[3][3];
        for(int i = 0;i<4;i++){
            int nr = r + dr[i], nc = c + dc[i];
            if(!inborder(nr, nc)) continue;
            getmatrikfrommask(u, m2);
            swap(m2, r, c, nr, nc);
            ll v = getmaskfrommatriks(m2);
            if(dist.find(v) == dist.end()){
                dist[v] = LLi(u, du+1);
                que.push(v);
            }
        }
    }
    return -1;
}

void prmatriks(int m[3][3]){
    for (int i = 0; i<3;i++){
        for(int j = 0; j<3; j++) printf("%d", m[i][j]);
        puts("");
    }
}

void prmask(ll mask){
    int m[3][3];
    getmatrikfrommask(mask, m);
    prmatriks(m);
}

void prsolution(){
    vector<ll> verts;
    ll u = target;
    while(u != -1){
        verts.push_back(u);
        u = dist[u].first;
    }
    for(int i = verts.size()-2; i>=0; i--){
        prmask(verts[i]);
        if(i != 0) puts("");
    }
}

int main(){
    int m[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 0} };
    target = getmaskfrommatriks(m);
    cout<<target<<endl;
    char gr[3][3];
    while ( cin >>gr[0][0]>>gr[0][1]>>gr[0][2]
                >>gr[1][0]>>gr[1][1]>>gr[1][2]
                >>gr[2][0]>>gr[2][1]>>gr[2][2]){
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++) grid[i][j] = gr[i][j]-'0';
        dist.clear();
        int dist = bfs();
        if(dist==-1) printf("Problema sem solucao\n");
        else{
            printf("Quantidade minima de passos = %d\n", dist);
            prsolution();
        }
    }
    return 0;
}
