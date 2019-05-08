#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main(){
	string s;
	int a=1;
	while(getline(cin, s)){
		int n=s.size();
		for(int i=0;i<n;i++){
			if(s[i]== 34){
				if(a%2==1) printf("``");
				else printf("%c%c", 39, 39);
				a=(a+1)%2;
			}
			else printf("%c", s[i]);
		}
		printf("\n");
	}
}
