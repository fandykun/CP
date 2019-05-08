#include <stdio.h>
int main(){
	int x1, x2, y1, y2;
	int a, b;
	scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
	if(x1>x2){
		a=x1-x2;
	}
	else{
		a=x2-x1;
	}
	if(y1>y2){
		b=y1-y2;
	}
	else{
		b=y2-y1;
	}
	printf("%d\n", a+b);
}
