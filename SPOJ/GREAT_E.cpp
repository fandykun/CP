#include <cstdio>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

#define vi vector<int>
#define pii pair<int, int>

const int INF = 1000000000;
int N, R, M;
int Ri, Rj, Wij;
char Tij[15];
int S, E;

int main()
{
    int tc; scanf("%d", &tc);
    for(int t = 1; t <= tc; t++) 
    { 
        scanf("%d%d%d", &N, &R, &M);
        vector< pii > primo[N + 1], fans[N + 1];
        priority_queue< pii, vector<pii>, greater<pii> > pq;
        int dist[N + 1];

        for(int i = 1;i <= R; i++) {
            scanf("%d %d %d %s", &Ri, &Rj, &Wij, Tij);
            primo[Ri].push_back(make_pair(Rj, Wij));
            primo[Rj].push_back(make_pair(Ri, Wij));
            if(Tij[0] == 'I'){
                fans[Ri].push_back(make_pair(Rj, INF));
                fans[Rj].push_back(make_pair(Ri, INF));
            }
            else{
                int temp = 0;
                for(int j = 0;j < strlen(Tij); j++) {
                    temp*= 10;
                    temp += (Tij[j]-'0');
                }
                fans[Ri].push_back(make_pair(Rj, temp));
                fans[Rj].push_back(make_pair(Ri, temp));
            }
                
        }

        scanf("%d%d", &S, &E);
        int l, r, mid, res;
        l = 1, r = M, res = -1;
        while(l <= r) {
            mid = (l + r) / 2;
            for(int i = 0;i <= N; i++)
                dist[i] = INF;
            pq.push(make_pair(mid, S));
            dist[S] = mid;

            while(!pq.empty()) {
                int w = pq.top().first;
                int cur = pq.top().second;
                pq.pop();
                if(w > dist[cur]) continue;
                for(int i = 0;i < primo[cur].size(); i++) {
                    pii nextp = primo[cur][i];
                    pii nextf = fans[cur][i];
                    int nw = nextp.second + dist[cur];
                    if(nw >= dist[nextp.first] || nw >= nextf.second) continue;
                    dist[nextp.first] = nw;
                    pq.push(make_pair(nw, nextp.first));                    
                }
            }

            if(dist[E] == INF)
                r = mid - 1;
            else {
                res = mid;
                l = mid + 1;
            }
        }
        printf("Case #%d: ", t);
        if(res == -1) printf("Primo can't escape\n");
        else printf("Primo can escape in %d minute(s)\n", res);
    }
    return 0;
}