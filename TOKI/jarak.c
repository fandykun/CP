#include <stdio.h>
#include <math.h>
int main(){
	int x1, x2, y1, y2;
	scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
	int A=abs(x1-x2);
	int B=abs(y1-y2);
	printf("%d\n", A+B);
	return 0;
}
