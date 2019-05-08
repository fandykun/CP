#include <cstdio>
#define MOD 100000007
typedef unsigned long long ULL;
using namespace std;

ULL power(ULL x, ULL y)
{
    ULL res = 1;
    x = x % MOD;
    while (y > 0){
        if (y & 1)
            res = (res*x) % MOD;
        y = y>>1;
        x = (x*x) % MOD;
    }
    return res;
}

int main(){
	int t;
	scanf("%d", &t);
	for(int tc=1;tc<=t;tc++){
		int n;
		ULL sum=0, mult=1, ans=0, bil;
		scanf("%d", &n);
		ULL pangkat=power(2, n-1);
		while(n--){
			scanf("%llu", &bil);
            mult=pangkat*bil;
            ans+=mult;
            ans%=MOD;
		}
		printf("Case %d: %llu\n", tc, ans);
	}
}
