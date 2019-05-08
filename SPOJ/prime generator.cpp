#include <bits/stdc++.h>
using namespace std;

int cekprima(long long x){
	long long i=2;
	if(x==1) return 0;
	for(i;i<=sqrt(x);i++){
		if(x%i==0){
			return 0;
		}
	}
	return 1;
}

long long arr[100000000];
 
int main(){
	long long i=1, ct=0;
	while(i<=1000000){
		if(cekprima(i)==1){
			arr[i]++;
			ct++;
		}i++;
	}
	int t;
	scanf("%d", &t);
	while(t--){
		long long m, n;
		scanf("%lld %lld", &m, &n);
		for(m;m<=n;m++){
			if(m<=1000000){
				
			}
		}
		cout << endl;
	}
	return 0;
} 
