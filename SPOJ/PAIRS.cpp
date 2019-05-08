#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define maks 1025

int main(){
    int t, n, x;
    scanf("%d", &t);
    while(t--){
        char s[21];
        scanf("%d", &n);
        LL S, a[maks]={0};
        for (int i=1; i<=n; ++i){
            scanf("%s", s);
            S = strlen(s);
            bool cek[11]={0};
            x=0;
            for(int i=0;i<S;++i) cek[s[i]-'0']=true;
            for(int i=0;i<=9;++i) if(cek[i]) x+=(1<<i);
            ++a[x];
        }
        S=0;
        for(int i=0 ; i<=(1<<10); ++i){
            for(int j=i; j<=(1<<10); ++j){
                if(i==j) S+=(LL(a[i])*LL(a[i]-1))/LL(2);
                else if((i&j)!=0) S+=(LL(a[i])*LL(a[j]));
            }
        }
        printf("%lld\n", S);
    }
    return 0;
}
