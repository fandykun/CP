#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	scanf("%d", &N);
	int jml=N;
	int m=N;
	int i=2;
	while(i*i<=N){
		for(int j=i;j<=m;j*=2){
			jml++;
			m=m/j;
		}
		i++;
	}
	cout << jml << endl;
}
