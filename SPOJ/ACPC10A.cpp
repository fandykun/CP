#include <bits/stdc++.h>
using namespace std;

int main(){
	int a1, a2, a3;
	int ap, gp;
	while((cin >> a1 >> a2 >> a3)){
		if(a1==0&&a2==0&&a3==0){
			break;
		}
		if(2*a2==a1+a3){
			ap=a3-a2;
			cout << "AP " << a3+ap << endl;
		}else if(pow(a2, 2)==a1*a3){
			gp=a3/a2;
			cout << "GP " << a3*gp << endl;
		}
	}
}
