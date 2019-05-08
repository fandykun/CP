#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long N, candy, i, sum=0;
		scanf("%lld", &N);
		for(i=1;i<=N;i++){
			scanf("%lld", &candy);
			sum+=candy;
			if(sum>=candy){
				sum%=N;
			}
		}
		if(sum==0){
			printf("YES\n");
		}else printf("NO\n");
	}
}
