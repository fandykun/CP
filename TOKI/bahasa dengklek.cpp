#include <iostream>
#include <cstring>
using namespace std;

int main(){
	string s;
	cin >> s;
	char teks[100];
	int slen = s.size();
	for(int i=0;i<slen;i++){
		teks[i]=s[i];
	}
	for(int i=0;i<slen;i++){
		if(teks[i]>='a'){
			teks[i]=teks[i]-32;
		}
		else
			teks[i]=teks[i]+32;
		cout << teks[i];
	}
	cout << endl;
}
