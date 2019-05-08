#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(){
	int t, sum=1;
	scanf("%d", &t);
	string magnet[t];
	for(int i=0;i<t;i++){
		cin >> magnet[i];
		if(i>0){
			if(magnet[i-1]!=magnet[i]){
				sum++;
			}
		}
	}
	printf("%d", sum);
	return 0;
}
