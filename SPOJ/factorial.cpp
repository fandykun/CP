#include <bits/stdc++.h>
using namespace std;

long zeros(long n){
	long long angka=5;
	long long jml=0;
	while(angka<=n){
		jml+=n/angka;
		angka*=5;
	}
	return jml;
}
int main(){
	int n;
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		long long N;
		scanf("%lld", &N);
		printf("%lld\n", zeros(N));
	}
}
