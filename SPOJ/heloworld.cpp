#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	if(b==0) return a;
	else return gcd(b, a%b);
}

int t;

int main(){
	t=getNum<int>();
	while(t--){
		int x, y, ans;
		scanf("%d %d", &x, &y);
		ans=gcd(x, y);
		printf("%d", ans);
	}
}
