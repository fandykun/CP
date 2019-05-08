#include <cstdio>
#include <cmath>
#include <queue>
#include <vector>
#include <utility>
#include <climits>
using namespace std;
#define VMAX 1000
#define MOD 1000000007
#define mp make_pair
typedef pair<int, int> pii;
const int INF = INT_MAX;
int x[VMAX], y[VMAX], dist[VMAX];
bool visited[VMAX];
vector <pii> graph[VMAX];
priority_queue< pii, vector<pii>, greater<pii> > PQ;

int readInt () {
	bool minus = false;
	int result = 0;
	char ch;
	ch = getchar();
    // ch = getchar_unlocked();
	while (true) {
		if (ch == '-') break;
		if (ch >= '0' && ch <= '9') break;
		ch = getchar();
        // ch = getchar_unlocked();
	}
	if (ch == '-') minus = true; else result = ch-'0';
	while (true) {
		ch = getchar();
        // ch = getchar_unlocked();
		if (ch < '0' || ch > '9') break;
		result = result*10 + (ch - '0');
	}
	if (minus)
		return -result;
	else
		return result;
}

int main()
{
    int tc, p, u, v, d, i, j, l, nv, cnt = 0;
    long long res;
    double tmp;
    tc = readInt();
    for(int t = 1;t <= tc; t++)
    {
        nv = readInt();
        p = readInt();
        for(i = 0;i < nv; i++) {
            dist[i] = INF;
            visited[i] = 0;
            graph[i].clear();
        }
        for(i = 0;i < nv; i++) {
            x[i] = readInt();
            y[i] = readInt();
            for(j = i; j--;) {
                u = x[i] - x[j];
                v = y[i] - y[j];
                d = (u * u) + (v * v);
                graph[i].push_back(mp(j, d));
                graph[j].push_back(mp(i , d));
            }
        }
        res = 0;
        dist[0] = 0;
        PQ.push(mp(0, 0));
        while(!PQ.empty()) {
            d = PQ.top().first;
            u = PQ.top().second;
            PQ.pop();
            if(!visited[u]) {
                tmp = (double)p * (double)sqrt(d);
                res += (long long)ceil(tmp);
                if (res > MOD) res %= MOD;
                visited[u] = 1;
                l = graph[u].size();
                for(i = 0;i < l; i++) {
                    v = graph[u][i].first;
                    d = graph[u][i].second;
                    if(!visited[v] && d < dist[v]) {
                        dist[v] = d;
                        PQ.push(mp(d, v));
                    }
                }
            }
        }
        printf("Scenario #%d: %lld\n", t, res);
    }
    return 0;
}