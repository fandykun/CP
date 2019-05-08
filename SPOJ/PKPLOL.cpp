#include <cstdio>

int main(){
	int t, n;
	scanf("%d", &t);
	for(int tc=1;tc<=t;tc++){
		scanf("%d", &n);
		printf("Case %d: ", tc);
		if(n==0) printf("abcdef");
		else if(n==1) printf("bc");
		else if(n==2) printf("abdeg");
		else if(n==3) printf("abcdg");
		else if(n==4) printf("bcfg");
		else if(n==5) printf("acdfg");
		else if(n==6) printf("acdefg");
		else if(n==7) printf("abc");
		else if(n==8) printf("abcdefg");
		else if(n==9) printf("abcdfg");
		printf("\n");

	}
}