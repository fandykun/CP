#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

int main(){
	int N, L;
	while(scanf("%d %d", &N, &L)){
		unsigned long long a, b, ans;
		a=pow(2, N);
		b=pow(2, L);
		ans=(a+b)%MOD;
		printf("%llu\n", ans);
	}
}
