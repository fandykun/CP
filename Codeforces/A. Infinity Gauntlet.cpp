#include <bits/stdc++.h>
using namespace std;

int main(){
	string a[6] = {"purple", "green", "blue", "orange", "red", "yellow"};
	string output[6] = {"Power", "Time", "Space", "Soul", "Reality", "Mind"};
	bool cek[6] { };
	int n;
	cin >> n;
	for(int i = 0;i < n;i ++){
		string s;
		cin >> s;
		for(int j = 0;j < 6;j++){
			if(s == a[j]){
				cek[j] = true;
				break;
			}
		}
	}
	cout << 6-n << endl;
	for(int i = 0;i < 6;i++){
		if(!cek[i]) cout << output[i] << endl;
	}
	return 0;
}