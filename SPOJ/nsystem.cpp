#include <bits/stdc++.h>
using namespace std;

int desimal(char x){
	if(x=='m'){
		return 1000;
	}else if(x=='c'){
		return 100;
	}else if(x=='x'){
		return 10;
	}else if(x=='i'){
		return 1;
	}else{
		x-=48;
		return x;
	}
}
void mxci(int total){
	int w,x,y,z;
	w=total/1000;
	x=(total/100)%10;
	y=(total/10)%10;
	z=total%10;
	if(w==1) cout << 'm';
	else if(w!=0) cout << w << 'm';
	if(x==1) cout << 'c';
	else if(x!=0) cout << x << 'c';
	if(y==1) cout << 'x';
	else if(y!=0) cout << y << 'x';
	if(z==1) cout << 'i';
	else if(z!=0) cout << z << 'i';
}


int main(){
	int T;
	cin>>T;
	while(T--){
		string s1, s2;
		cin >> s1 >> s2;
		int A, B, sum1=0, sum2=0, temp=1;
		int s1len=s1.size();
		int s2len=s2.size();
		for(int i=0;i<s1len;i++){
			A=desimal(s1[i]);
			if(2<=A&&A<=9){
				temp=A;
			}else {
				sum1+=A*temp;
				temp=1;
			}
		}
		for(int i=0;i<s2len;i++){
			B=desimal(s2[i]);
			if(2<=B&&B<=9){
				temp=B;
			}else {
				sum2+=B*temp;
				temp=1;
			}
		}
		int total=sum1+sum2;
		mxci(total);
		cout << endl;
	}
}
