#include <bits/stdc++.h>
using namespace std;

int main(){
	int x;
	cin>>x;
	if(x==0||x==1||x==2){
		cout << x << endl;
	}else if(x%2==1){
		cout << "0" << endl;
	}else{
		int sum=0;
		int y=x;
		while(y%2!=1){
			sum+=2;
			y/=2;
		}
		cout << sum << endl;
	}
}
