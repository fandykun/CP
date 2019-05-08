#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	int sum=N;
	for(int i=2;i*i<=N;i++){
		int j=i*i;
		while(j<=N){
			if(j<=N){
				sum++;
			}
			j+=i;
		}
	}
	cout << sum << endl;
}
