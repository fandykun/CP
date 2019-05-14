#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pb push_back
#define pii pair<int, int>
#define mp make_pair
#define fi first
#define se second
typedef long long LL;

const int MAXN = 2e4+5;
int n, m, q;
LL in[MAXN], out[MAXN];
vector< pii > adj[MAXN], rev[MAXN];

priority_queue< pair<LL, int> > pq;

void init() {
    memset(in, -1, sizeof(in));
    memset(out, -1, sizeof(out));
    for(int i = 0; i < n; i++) {
        adj[i].clear();
        rev[i].clear();
    }
    return;
}

void compute_in()
{
    while(!pq.empty()) pq.pop();
    in[0] = 0LL;
    pq.push(mp(0LL, 0));
    while(!pq.empty()) {
        LL w = - pq.top().fi;
        int cur = pq.top().se;
        pq.pop();
        for(int i = 0;i < adj[cur].size(); i++) {
            pii nex = adj[cur][i];
            LL nw = w + (LL) nex.se;
            if(in[nex.fi] != -1 && in[nex.fi] <= nw) continue;
            in[nex.fi] = nw;
            pq.push(mp(- nw, nex.fi));
        }
    }
    return;
}

void compute_out()
{
    while(!pq.empty()) pq.pop();
    out[n - 1] = 0LL;
    pq.push(mp(0LL, n - 1));
    while(!pq.empty()) {
        LL w = -pq.top().fi;
        int cur = pq.top().se;
        pq.pop();
        for(int i = 0;i < rev[cur].size(); i++) {
            pii nex = rev[cur][i];
            LL nw = w + (LL) nex.se;
            if(out[nex.fi] != -1 && out[nex.fi] <= nw) continue;
            out[nex.fi] = nw;
            pq.push(mp(-nw, nex.fi));
        }
    }
    return;
}

int main()
{
    int tc;
    scanf("%d", &tc);
    for(int t = 1; t <= tc; t++) {
        scanf("%d%d%d", &n, &m, &q);
        init();
        while(m--) {
            int u, v, w;
            scanf("%d%d%d", &u, &v, &w);
            adj[u].pb(mp(v, w));
            rev[v].pb(mp(u, w));
        }
        compute_in(); 
        compute_out();
        printf("Case #%d:\n", t);
        while(q--) {
            int u, v, w;
            scanf("%d%d%d", &u, &v, &w);
            if(in[u] == -1 || out[v] == -1) {
                printf("NO\n"); 
                continue;
            }
            LL cst = in[u] + (LL) w + out[v];
            if(cst < out[0]) printf("YES\n");
            else printf("NO\n");
        }
    }
    return 0;
}