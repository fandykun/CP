#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	while(n--){
		long long jml=0;
		int x;
		cin>>x;
		if(x==1) cout<<jml<<endl;
		else{
			for(int i=2;i<=sqrt(x);i++){
				if(x%i==0){
					if(i==x/i){
						jml+=i;
					}else jml+=i+(x/i);
				}
			}
			jml++;
			cout<<jml<<endl;
		}
	}
}
