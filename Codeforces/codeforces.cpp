#include <stdio.h>

int main()
{
    int n, x, cek=0;
    scanf("%d", &n);
    scanf("%d", &x);
    while(n--){
        int a, b;
        scanf("%d %d", &a, &b);
        if(a==x || b==x || 7-b==x || 7-a==x) cek=1;
    }
    if(cek) printf("YES\n");
    else printf("NO\n");
}
