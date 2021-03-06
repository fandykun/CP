#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

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

const int N = 1000 + 1;
const int INF = 1e9;
const int MOD = 1e9 + 7;

int cost[N][N];
int min_dist[N];
bool taken[N];
int x[N], y[N];
int n, p;

int prim_quadratic() {
    for(int i = 1;i <= n; i++) {
        min_dist[i] = INF;
        taken[i] = 0;
    }
    min_dist[1] = 0;
    long long ans = 0;
    for(int i = 0;i < n; i++) {
        int best = INF;
        int idx = -1;
        for(int j = 1;j <= n; j++) {
            if(!taken[j] && min_dist[j] <= best) {
                best = min_dist[j];
                idx = j;
            }
        }
        if(best == INF) {
            break;
            best = 0;
        }

        ans += (long long)ceil(sqrt(best) * p);
        taken[idx] = 1;
          
        for(int j = 1; j <= n; j++)
            min_dist[j] = min(min_dist[j], cost[idx][j]);

        for(int j = 1;j <= n; j++)
            printf("min dist = %d\n", min_dist[j]); 
        printf("best = %d\n", best);
    }
    return ans % MOD;
}

int sqr(int a) {
    return a * a;
}

void read() {
    n = readInt();
    p = readInt();
    for(int i = 1;i <= n; i++) {
        x[i] = readInt();
        y[i] = readInt();
    }
}

void make_cost() {
    for(int i = 1;i <= n; i++)
        for(int j = 1;j <= n; j++) {
            cost[i][j] = sqr(x[i] - x[j]) + sqr(y[i] - y[j]);
        }
}

int main()
{
    int tc;
    tc = readInt();
    for(int t = 1;t <= tc; t++)
    {
        read();
        make_cost();
        printf("Scenario #%d: %d\n", t, prim_quadratic());
    }
    return 0;
}                                                                                                                                                                                                                                                                        