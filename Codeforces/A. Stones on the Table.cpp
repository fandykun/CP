#include <cstdio>
#include <string>
using namespace std;

int main(){
	int n, sum=0;
	scanf("%d", &n);
	char s[n];
	scanf("%s", s);
	for(int i=1;i<n;i++) if(s[i-1]==s[i]) sum++;
	printf("%d", sum);
	return 0;
}
