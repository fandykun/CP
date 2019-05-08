#include <cstdio>
using namespace std;

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long bil3, lastbil3, sum, n, bil, b, a;
		scanf("%lld %lld %lld", &bil3, &lastbil3, &sum);
		n=(2*sum)/(bil3+lastbil3);
		printf("%lld\n", n);
		b=(lastbil3-bil3)/(n-5);
		a=bil3-(2*b);
		for(long long i=1;i<=n;i++){
			printf("%lld ", a);
			a+=b;
		}
		printf("\n");
	}
}
