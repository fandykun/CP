#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char s[9][9];
		int a, b;
		for(int i=0;i<8;i++){
			for(int j=0;j<8;j++){
				scanf("%c", &s[i][j]);
				if(s[0][j]=='R'){
					a=j;
				}else if(s[1][j]=='R'){
					b=j;
				}
			}
		}
		int i=0;
		bool cek=false;
		if((abs(a-b)==1) || 
	}
}
