#include <cstdio>
using namespace std;

int main(){
	int n[40], sum[40];
	n[1]=1;n[2]=1;
	for(int i=3;i<=38;i++){
		n[i]=n[i-1]+n[i-2];
	}
	sum[0]=0;
	for(int i=1;i<=38;i++){
		sum[i]=sum[i-1]+n[i];
	}
	int x, ans=1;
	while(scanf("%d", &x)==1){
		for(int i=1;i<=38;i++){
			ans=i;
			if(sum[i]>x) break;
		}
		printf("%d\n", ans);
	}
}
