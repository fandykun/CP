#include <cstdio>
typedef long long LL;

int main(){
    int t;
    LL n, a, a1, a2, ans, sum;
    scanf("%d", &t);
    while(t--){
        scanf("%lld", &n);
        ans=0;
        for(a = 2; a*a<=n; a++ ){
            a1 = a + 1;
            a2 = n / a;
            if(a1 <= a2){
                sum = (a2*(a2+1))/2 - (a1*(a1-1))/2;
                ans += sum;
                ans += a*(a2-a1+1);
            }
            ans+= a;
        }
        ans += n - 1;
        printf("%lld\n", ans);
    }
    return 0;
}
