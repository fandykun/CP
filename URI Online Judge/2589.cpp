#include <bits/stdc++.h>
typedef long long ll;
int main(){
	ll gap[33]={1,2,4,6,8,14,18,20,22,34,36,44,52,72,86,96,112,114,118,132,148,154,180,210,220,222,234,248,250,282};
	ll pgap[33]={2,3,7,23,89,113,523,887,1129,1327,9551,15683,19609,31397,155921,360653,370261,492113,1349533,
            1357201,2010733,4652353,17051707,20831323,47326693,122164747,189695659,191912783,387096133,436273009};
	ll n;
	while(scanf("%lld",&n)!=EOF){
        ll ans=0;
		if(n==2) ans=0;
		for(ll i=0;i<30;i++){
			if(n<(gap[i]+pgap[i])){
			    ans=gap[i-1];
                break;
            }
		}
		printf("%lld\n", ans);
	}
	return 0;
}
