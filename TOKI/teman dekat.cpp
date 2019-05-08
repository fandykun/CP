#include <bits/stdc++.h>
using namespace std;

int main(){
	int N, D;
	long maks=-2000000;
	long min=2000000;
	cin >> N >> D;
	int arr[N][3];
	
	for(int i=1;i<=N;i++){
		for(int j=1;j<=2;j++){
			cin >> arr[i][j];
		} 
	}
	for(int i=1;i<N;i++){
		for(int A=N;A>i;A--){
			int T=pow(abs(arr[i][1]-arr[A][1]), D) + pow(abs(arr[i][2]-arr[A][2]), D);
			if(T>maks){
				maks=T;
			}
			if(T<min){
				min=T;
			}
		}
	}
	cout << min << " " << maks << endl;
}
