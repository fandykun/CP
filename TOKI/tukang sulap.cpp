#include <bits/stdc++.h>
using namespace std;

int main(){
	int N, M;
	long arr[4][1002];
	cin >> N;
	for(int i=1;i<=2;i++){
		for(int j=1;j<=N;j++){
			cin >> arr[i][j];
		} 
	}
	char P, Q;
	int x, y;	
	cin >> M;
	for(int K=1;K<=M;K++){
		cin >> P >> x >> Q >> y; 
		if(P=='A'){
			if(Q=='A'){
				long tmp=arr[1][x];
				arr[1][x]=arr[1][y];
				arr[1][y]=tmp;
			}
			else{
				long tmp=arr[1][x];
				arr[1][x]=arr[2][y];
				arr[2][y]=tmp;
			}
		}
		else if(Q=='A'){
			long tmp=arr[2][x];
			arr[2][x]=arr[1][y];
			arr[1][y]=tmp;
		}
		else{
			long tmp=arr[2][x];
			arr[2][x]=arr[2][y];
			arr[2][y]=tmp;
		} 
	}
	int Z=N;
	for(int i=1;i<=2;i++){
		for(int j=1;j<=Z;j++){
			cout << arr[i][j];
			if(j!=Z){
				cout << " ";
			}
		}
		cout << endl; 
	}
}
