#include <iostream>
#include <cstring>
using namespace std;

int main(){
	string s;
	int K;
	cin >> s;
	cin >> K;
	int slen = s.size();
	char arr[255];
	for(int i=0;i<slen;i++){
		arr[i]=((s[i]-'a'+K)%26)+'a';
	}
	for(int i=0;i<slen;i++){
		cout << arr[i];
	}
	cout << endl;
}
