#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a;
		unsigned long long b;
		cin>> a >> b;
		if(a==0||a==1||a==5||a==6){
			cout << a << endl;
		}else if(a==4||a==9){
			int c=b%2;
			if(b==0) c=0;
			else if(c==0) c=2;
			int d=pow(a, c);
			cout << d%10 << endl;
		}else{
			int c=b%4;
			if(b==0) c=0;
			else if(c==0) c=4;
			int d=pow(a, c);
			cout << d%10 << endl;
		}
	}
}
