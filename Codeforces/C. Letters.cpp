#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define pll pair<ll,ll>
ll room, n, m;
vector<ll> vc;

pll binser(ll lo, ll hi, ll x){
    pll tmp;
    while(lo < hi){
        ll mid = (lo + hi) >> 1;
        if(vc[mid] < x) lo = mid+1;
        else hi = mid;
    }
    tmp.first = lo + 1; tmp.second = (lo > 0) ? x - vc[lo-1] : x;
    return tmp;
}

int main(){
    ll x, sum = 0;
    scanf("%llu %llu", &n, &m);
    for(ll i = 0;i < n;i++){
        scanf("%llu", &x);
        vc.push_back(x + sum);
        sum += x;
    }
    for(ll i = 0;i < m;i++){
        scanf("%llu", &x);
        pll ans = binser(0, n-1, x);
        cout << ans.first << " " << ans.second << endl;
    }
    return 0;
}
