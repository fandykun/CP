#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000009

ll modex(ll x, ll y, ll p){
    int res = 1;
    x = x % p;
    while (y > 0){
        if (y & 1)
            res = (res*x) % p;
        y = y>>1;
        x = (x*x) % p;
    }
    return res;
}

int main(){
    ll n, a, b, k; string s;
    scanf("%lld%lld%lld%lld", &n, &a, &b, &k);
    cin>>s;
    ll sum, ans=0;
    ll slen=s.size();
    for(int i=0; i<=n;i++){
        sum=modex(a, n-i, MOD)*modex(b, i, MOD)%MOD;
        if(s[i%slen]=='-') sum=0-sum;
        ans=(ans+sum)%MOD;
    }
    while(ans<0) ans+=MOD;
    cout<<ans<<endl;
    return 0;
}
