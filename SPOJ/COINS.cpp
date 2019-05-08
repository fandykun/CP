#include <bits/stdc++.h>
using namespace std;

long long arr[100000000];

void initialize(){
	arr[0]=0, arr[1]=1, arr[2]=2, arr[3]=3;
	for(int i=3;i<100000000;i++){
		int temp=arr[i/2]+arr[i/3]+arr[i/4];
		if(temp>i) arr[i]=temp;
		else arr[i]=i;
	}
}
long long rekursif(int n){
	if(n>=100000000){
		return rekursif(n/2)+rekursif(n/3)+rekursif(n/4);
	}else return arr[n];
}
int main(){
	initialize();
	int n;
	while(scanf("%d", &n)==1){
		long long hasil;
		hasil=rekursif(n);
		printf("%lld\n", hasil);
	}
}
