#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b, n;
		scanf("%d %d %d", &a, &b, &n);
		int arr[n];
		for(long long i=a;i<=n*a;i+=i){
			arr[i]++;
		}
		for(long long i=b;i<=n*b;i+=i){
			arr[i]++;
		}
		int urut=1;
		for(int i=0;i<n;i++){
			printf("%d ", arr[i]);
		}
	}
}
