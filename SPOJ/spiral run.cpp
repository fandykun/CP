#include <cstdio>
#include <cmath>
using namespace std;

int main(){
	int t, n;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		int P, arah;
		P=(int)floor((1+sqrt(1+4*(double)n))/2.0);
		arah=2*P-2;
		if(n>P*P-1) arah++;
		arah%=4;
		if(arah==0) printf("North");
		else if(arah==1) printf("East");
		else if(arah==2) printf("South");
		else if(arah==3) printf("West");
		printf("\n");
	}
	return 0;
}
