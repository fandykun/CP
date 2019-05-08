#include <cstdio>
#include <iostream>
using namespace std;

int gcd(int x, int y){
	if(y==0) return x;
	else return gcd(y, x%y);
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int A, B, X, Y;
		scanf("%d %d", &A, &B);
		Y=A/gcd(A,B);
		X=B/gcd(A,B);
		printf("%d %d\n", X, Y);
	}
}
