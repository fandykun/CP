#include <cstdio>
using namespace std;

int main(){
	long long arr[40], mult=6;
	arr[1]=2;
	for(int i=2;i<=36;i++){
		arr[i]=arr[i-1]+mult;
		mult*=3;
	}
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d", &n);
		printf("%lld\n", arr[n]);
	}
}
