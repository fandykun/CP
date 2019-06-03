#include <cstdio>
typedef long long ll;
#define MAXN 100002
int n, m;
int t[MAXN];
bool enough(ll time) {
    ll cnt = 0;
    for(int i = 0;i < n; ++i) {
        ll here = time / t[i];
        if(here >= m || here + cnt >= m)
            return true;
        cnt += here;
    }
    return cnt >= m;
}

int main() {
    int T;
    scanf("%d", &T);
    while(T--) {
        scanf("%d%d", &n, &m);
        for(int i = 0;i < n; i++)
            scanf("%d", &t[i]);
        ll low = 0, high = (ll)t[0] * m;
        while(high - low > 1) {
            ll mid = (low + high) / 2;
            (enough(mid) ? high : low) = mid;
        }
        printf("%lld\n", high);
    }
    return 0;
}