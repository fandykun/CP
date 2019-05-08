#include <bits/stdc++.h>
using namespace std;

int reverse(int x){
	int temp=x;
	int balik=0;
	while(temp>0){
		balik=balik*10 + temp%10;
		temp/=10;
	}
	return balik;
}
int main(){
	int n;
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		int a, b;
		scanf("%d %d", &a, &b);
		int c=reverse(a)+reverse(b);
		printf("%d\n", reverse(c));
	}
}
