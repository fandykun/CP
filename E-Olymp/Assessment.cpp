#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL power(LL x, LL y, LL p){
    LL res = 1;
    x = x % p;
    while (y > 0){
        if (y & 1) res = (res*x) % p;
        y = y>>1;
        x = (x*x) % p;
    }
    return res;
}

int main(){
    LL tc;
    scanf("%lld", &tc);
    while(tc--){
        LL n, m;
        scanf("%lld%lld", &n, &m);
        LL modex=power(2, n, m);
        LL ans=(n%m*(n-2)%m*modex)%m - (2*(n-3)%m*modex)%m - 6;
        while(ans<0) ans+=m;
        printf("%lld\n", ans);
    }
}
