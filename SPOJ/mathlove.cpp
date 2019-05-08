#include <bits/stdc++.h>
using namespace std;

int fib(double x){
	double z;
	z=((x*x)/2)+(x/2);
	return z;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int Y;
		scanf("%d", &Y);
		double i=1;
		int j=1;
		int cek=0;
		while(fib(i)<=Y){
			if(fib(i)==Y){
				cek=1;
				break;
			}else {
			i++;
			j++;
			}
		}
		if(Y==0){
			printf("0\n");
		}else if(cek==1){
			printf("%d\n", j);
		}else printf("NAI\n");
	}
}
