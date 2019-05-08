#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b;
		scanf("%d %d", &a, &b);
		int i, j;
		for(i=1;i<=a;i++){
			for(j=1;j<=b;j++){
				if((j+i)%2==0){
					printf("*");
				}else printf(".");
			}
			printf("\n");
		}
	}
}
