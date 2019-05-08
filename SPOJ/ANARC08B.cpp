#include <cstdio>
#include <string.h>
#include <iostream>
#include <string>
using namespace std;

int sevens(int x){
	if(x==63) return 0;  
	if(x==10) return 1;
	else if(x==93) return 2;
	else if(x==79) return 3;
	else if(x==106) return 4;
	else if(x==103) return 5;
	else if(x==119) return 6;
	else if(x==11) return 7;
	else if(x==127) return 8;
	else if(x==107) return 9;
}

int main(){
	string s, jwb[];
	int sum=0, ans=0, j=0;
	while((cin>>s)&&s!="BYE"){
		int aa=s.find('+');
		int ab=s.find('=');
		cout << aa << " " << ab;
		for(int i=0;i<aa;i){
			if(i%3==2){
				jwb[j]=
			}
			else 
		}
}
