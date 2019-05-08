#include <stdio.h>
#include <string.h>

int main()
{
    long long n, x;
    scanf("%lld %lld", &n, &x);
    long long ans=x, kid=0;
    while(n--){
        char a[5];
        long long d;
        scanf("%s %lld", &a, &d);
        if(strcmp(a, "+")==0){
            ans+=d;
        }else{
            if(ans-d>=0) ans-=d;
            else kid++;
        }
    }
    printf("%lld %lld\n", ans, kid);
}
