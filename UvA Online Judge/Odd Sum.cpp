#include <cstdio>
using namespace std;

int main(){
	int t;
	scanf("%d", &t);
	for(int i=1;i<=t;i++){
		int a, b, sum=0;
		scanf("%d", &a);
		scanf("%d", &b);
		for(a;a<=b;a++){
			if(a%2==1) sum+=a;
		}
		printf("Case %d: %d\n", i, sum);
	}
}
