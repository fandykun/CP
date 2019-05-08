#include <iostream>
using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int x, a, b;
		cin >> x;
		int temp2=1;
		int temp1=0;
		int i=1;
		while(i<x){
			if(temp1<temp2){
				i++;
				temp1++;
			}if(temp1==temp2){
				temp1=0;
				temp2++;
			}
		}
		cout << temp1 << " " << temp2 << endl;
	}
}
