#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
ll arr[1000001] { };

int main(){
    ll n, x, p;
    scanf("%llu", &n);
    vector<ll> vc;
    while(n--){
        scanf("%llu", &x);
        if(!arr[x]){
            vc.push_back(x);
            arr[x]=1;
        }
    }
    for(int i=0;i<vc.size();i++) printf("%llu ", vc[i]);
    printf("\n");
    reverse(vc.begin(), vc.end());
    for(int i=0;i<vc.size();i++) printf("%llu ", vc[i]);
    printf("\n");
    return 0;
}
