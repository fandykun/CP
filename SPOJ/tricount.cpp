#include <bits/stdc++.h>
using namespace std;

unsigned long long fib(long long x){
	if(x==1) return 1;
	else return x+fib(x-1);
}
int main(){
	int T;
	cin >> T;
	while(T--){
		long long n;
		cin >> n;
		unsigned long long sum=n*n;
		for(long long i=n-1;i>=1;i--){
			sum+=fib(i);
		}
		cout << sum << endl;
	}
}
