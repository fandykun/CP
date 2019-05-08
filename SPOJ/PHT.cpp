#include <cstdio>
#include <cmath>
typedef unsigned long long ll;

int main(){
    int t;
    scanf("%d", &t);
    for(int i=1;i<=t;i++){
        ll n;
        scanf("%llu", &n);
        ll ans = sqrt(n+1) - 1;
        printf("Case %d: %llu\n", i, ans);
    }
}
