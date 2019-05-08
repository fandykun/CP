#include <cstdio>
#include <cmath>
using namespace std;
typedef long long LL;

int main(){
	int t; 
	LL arr[50];
	scanf("%d", &t);
	for(int i=2;i<=31;i++){
		arr[i-1]=i*(pow(2, i))-1;
	}
	while(t--){						
		LL n;
		scanf("%lld", &n);
		for(int i=1;i<=30;i++){
			if(n<=arr[i]) { printf("%d\n", i); break; }
		}
	}
	return 0;
}
