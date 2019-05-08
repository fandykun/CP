#include <stdio.h>
#define MOD 1000000007
typedef long long LL;

LL power(LL x, LL n){
    LL i=1, res=1;
    LL b=x;
    while(n>0){
        if(n & 1){ res=(res*b)%MOD; }
        n>>=1;
        b=(b*b)%MOD;
    }
    return res;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        if(n>=3){
            LL poww=power(2LL, (LL)n);
            LL mult=((LL)n*((LL)n-1LL)/2LL)%MOD;
            LL sum=((LL)n+1LL)%MOD;
            LL ans=poww-mult-sum;
            while(ans<0LL) ans+=MOD;
            printf("%lld\n", ans);
        }
        else printf("0\n");
    }
}
