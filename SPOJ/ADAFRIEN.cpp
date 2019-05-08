#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL n, k, b;
map<string,LL> msL;
vector<LL> vL;
string a;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> k;
	for(LL i=1;i<=n;i++){
		cin >> a >> b;
		msL[a]+=b;
	}
	for(map<string,LL>::iterator it=msL.begin();it!=msL.end();it++){
		vL.push_back(it->second);
	}
	sort(vL.begin(), vL.end());
	LL ans=0;
	LL p=vL.size();
	LL tmp=max(p-k, (LL) 0);
	for(LL i=p-1;i>=tmp;i--){
		ans+=vL[i];
	}
	printf("%lld", ans);
	return 0;
}
