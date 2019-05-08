#include <bits/stdc++.h>
using namespace std;

int main(){
	string S1, S2, S3, S4;
	cin >> S1 >> S2 >> S3 >> S4;
	int hps = S1.find(S2);
	int S2len = S2.size();
	if(hps!=-1){
		S1.erase(hps, S2len);
	}
	int msk = S1.find(S3);
	int S3len = S3.size();
	if(msk!=-1){
	S1.insert(msk+S3len, S4);
	}
	cout << S1 << endl;	
}
