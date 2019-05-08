#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int N, x;
	cin >> N;
	for(int a=1;a<=N;a++){
		cin >> x;
		int prime=0;
		for(int b=2;b<=sqrt(x);b++){
			if(x%b==0){
				prime=1;
				break;
			}
		}
		if(x<2 || prime==1)
			cout << "BUKAN" << endl;
		else cout << "YA" << endl; 
	}
	return 0;
}
