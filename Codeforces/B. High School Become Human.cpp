#include <bits/stdc++.h>
using namespace std;

int main(){
	double x, y, c1, c2;
	cin >> x >> y;
	c1 = y*log(x);
	c2 = x*log(y);
	if(c1==c2) cout <<'=' << endl;
	else if(c1>c2) cout << '>' << endl;
	else cout << '<' << endl;
}