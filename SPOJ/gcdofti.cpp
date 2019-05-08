#include <bits/stdc++.h>
using namespace std;

long tes(long x, long y){
	if(x==0) return y;
	if(y==0) return x;
	if(x>y){
		x=x%y;
		return tes(y, x);
	}
	if(x<y){
		y=y%x;
		return tes(x, y);
	}
}
int main(){
	long a,b,c;
	cin >> a >> b >> c;
	long d=tes(a, b);
	cout << tes(d, c) << endl;
	return 0;
}
