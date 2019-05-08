#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>primes;

bool cekprima(ll n){
    if(n<2) return false;
    for(ll i=0;primes[i]*primes[i]<=n && i<primes.size();i++)
        if(n%primes[i]==0) return false;
    return true;
}

ll combin(ll n, ll k) {
    if (k > n) return 0;
    ll r = 1;
    for (ll d = 1; d <= k; ++d) {
        r *= n--;
        r /= d;
    }
    return r;
}

int main(){
    primes.push_back(2);
    for(ll i=3;i<=2500;i+=2){
        if(cekprima(i)) primes.push_back(i);
    }
    ll m, n, k;
    while(cin>>n>>m>>k && (n!=0&&m!=0&&k!=0)){
        ll baris[n], kolom[m], ans=0;
        for(ll i=0;i<n;i++){
            baris[i]=0;
            for(ll j=0;j<m;j++) if(!cekprima(i*m+j)) baris[i]++;
            if(k<=baris[i]) ans+=combin(baris[i], k);
        }
        for(ll i=0;i<m;i++){
            kolom[i]=0;
            for(ll j=0;j<n;j++)if(!cekprima(j*m+i)) kolom[i]++;
            if(k<=kolom[i]) ans+=combin(kolom[i], k);
        }
        if(k==1) ans/=2;
        cout<<ans<<endl;
    }
    return 0;
}
