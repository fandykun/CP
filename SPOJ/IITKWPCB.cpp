#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n, ans=1;
		scanf("%lld", &n);
		if(n%2==1){
			ans=n/2;
		}else {
			ans=n/2;
			if(n>4 && ans%2==1){
				ans-=2;
			}else if(n>3)ans--;
		}
		printf("%lld", ans);
		printf("\n");
	}
}
