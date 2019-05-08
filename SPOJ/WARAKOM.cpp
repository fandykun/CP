#include <bits/stdc++.h>
using namespace std;

int t,N,Q,M;
int a[51];
bool dp[2][1001];

int main(){
	scanf("%d", &t);
	while(t--){
		scanf("%d %d %d", &N, &Q, &M);
		for(int i=0;i<N;i++){
			scanf("%d", &a[i]);
		}
		memset(dp,0,sizeof(dp));
		dp[0][Q]=1;
		for(int i=0;i<N;i++){
			for(int j=0;j<=M;j++){
				if(dp[i%2][j]==1){
					if(j+a[i]<=M) dp[(i+1)%2][j+a[i]]=1;
					if(j-a[i]>=0) dp[(i+1)%2][j-a[i]]=1;
				}
				dp[i%2][j]=0;
			}
		}
		int ans=-1;
		for(int i=M;i>=0;i--){
			if(dp[N%2][i]==1){
				ans=i;
				i=-1;
			}
		}
		printf("%d\n", ans);
	}
}
