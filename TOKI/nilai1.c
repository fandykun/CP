#include <stdio.h>
int main(){
	int nilai;
	scanf("%d", &nilai);
	if(nilai>=71){
		printf((nilai>=81) ? "A" : "AB");
	}
	else 
		if(nilai>=60){
			printf((nilai>=66) ? "B" : "BC");
		}
	else
		printf((nilai>=40) ? "C" : "E");
}

