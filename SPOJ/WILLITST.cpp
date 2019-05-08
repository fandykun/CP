#include <cstdio>

int main(){
	unsigned long long n;
	scanf("%llu", &n);
	unsigned long long i;
	while(i<n){
		i*=2;
	}
	if(i==n){
		printf("TAK\n");
	}else printf("NIE\n");
	return 0;
}
