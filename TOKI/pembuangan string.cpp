#include <bits/stdc++.h>
using namespace std;

int main(){
	string a, b;
	cin >> a >> b;
	int h=a.find(b);
	int blen=b.size();
	while(h!=-1){
		a.erase(h, blen);
		h=a.find(b);
	}
	cout << a << endl;
}
