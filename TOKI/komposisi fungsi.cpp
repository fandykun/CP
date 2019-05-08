#include <bits/stdc++.h>
using namespace std;

int fungsi(int A, int B, int K, int x){
	int fgs=abs(A*x+B);
	return fgs;
}
int main(){
	int A, B, K, x, loop;
	cin >>	A >> B >> K >> x;
	for(int i=1;i<=K;i++){
		loop=fungsi(A, B, K, x);
		x=loop;
	}
	cout << loop << endl;
}
