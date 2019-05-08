#include <bits/stdc++.h>
using namespace std;

int persegi(int x){
	if(x==1) return 1;
	else return pow(x, 2)+persegi(x-1);
}
int main(){
	int N;
	scanf("%d", &N);
	while(N!=0){
		printf("%d\n", persegi(N));
		scanf("%d", &N);
	}
	return 0;
}
