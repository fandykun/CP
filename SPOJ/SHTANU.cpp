#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	scanf("%d", &t);
	for(int tc = 1;tc <= t;tc++){
		int n, q, t1, t2;
		ll x;
		scanf("%d%d", &n, &q);
		vector<ll> vc;
		for(int i = 0;i < n;i++) {
			scanf("%lld", &x);
			vc.push_back(x);
		}
		printf("Case %d:\n", tc);
		while(q--){
			scanf("%d%d", &t1, &t2);
			ll ans = accumulate(vc.begin()+t1-1, vc.begin()+t2, 0ll);
			printf("%lld\n", ans);
		}
	}
}	