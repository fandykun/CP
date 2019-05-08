#include <cstdio>
#include <cmath>
using namespace std;

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		double a, b, c, d, ans;
		scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
		double s=(a+b+c+d)/2;
		ans=sqrt((s-a)*(s-b)*(s-c)*(s-d));
		printf("%.2lf\n", ans);
	}
}
