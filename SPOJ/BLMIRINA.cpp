#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		double x, y, r;
		scanf("%lf %lf %lf", &x, &y, &r);
		double a, b, my, mx, m, sx, sy, jarak, gs;
		jarak=sqrt((x*x)+(y*y));
		gs=sqrt((jarak*jarak)-(r*r));
		my=sqrt((x-r)*(x-r)+(y*y));
		mx=x-r;
		m=my/mx;
		sx=sqrt((gs*gs)/(m*m+1));
		sy=sqrt((gs*gs)-(sx*sx));
		printf("%lf %lf\n", sx, sy);
	}
}
