#include <bits/stdc++.h>
using namespace std;

unsigned long long fib(unsigned long long x){
	if(x==0) return 0;
	else if(x==1) return 1;
	else return fib(x-1)+fib(x-2);
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		unsigned long long N, M;
		scanf("%d %d", &N, &M);
		unsigned long long sum=0;
		for(N;N<=M;N++){
			unsigned long long a=fib(N)%1000000007;
			sum+=a%1000000007;
		}
		printf("%d\n", sum);
	}
}
