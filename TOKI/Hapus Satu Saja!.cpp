#include <bits/stdc++.h>
using namespace std;

int main(){
	int benar=0;
	string A, B;
	cin >> A >> B;
	string C=A;
	int Alen = A.size();
	int Blen = B.size();
	if(Alen==Blen+1){
		int i=0;
		while(i<Alen){
			C.erase(i, 1);
			if(C==B){
				benar=1;
				break;
			}
			else {
				C=A;
				i++;
			}
		}
	}
	else benar=0;
	if(benar==1){
		cout << "Tentu saja bisa!" << endl;
	}
	else cout << "Wah, tidak bisa :(" << endl;
}
