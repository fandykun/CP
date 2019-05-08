#include <bits/stdc++.h>
using namespace std;

int main(){
	int x;
	scanf("%d", &x);
	int arr[x+1][x+1];
	int jml1=0;
	int jml2=0;
	for(int i=1;i<=x;i++){
		for(int j=1;j<=x;j++){
			scanf("%d", &arr[i][j]);
			if(j==x){
				jml1+=arr[i][x];
			}
			if(i==x){
				jml2+=arr[x][j];
			}
		}
	}
	cout << jml1 << " " << jml2 << endl;	
}
