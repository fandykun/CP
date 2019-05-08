#include <stdio.h>
#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		string n;
		unsigned long long sum=0;
		cin >> n;
		int nlen=n.size();
		for(int i=0;i<nlen;i++){
			sum=sum+(n[i]-'0');
		}
		printf("%llu", sum);
		printf("\n");
	}
}
