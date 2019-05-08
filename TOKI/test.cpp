#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[1000]={0};
	int N;
	cin >> N;
	for(int i=2;i<sqrt(N);i++){
		if(N%i==0){
			arr[i]++;
		}
	}
	for(int i=2;i<N;i++){
		if(arr[i]!=0){
			cout << i << endl;
		}
	}
}
