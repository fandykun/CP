#include <bits/stdc++.h>
using namespace std;

int main(){
	double n;
	while(cin >> n){
		if(n==0.00){
			break;
		}
		int jml=0;
		double a=2;
		for(double j=1/2;j<=n;a++){
			jml++;
			j=j+1/a;
		}
		cout << jml << " card(s)" << endl;
	}
}
