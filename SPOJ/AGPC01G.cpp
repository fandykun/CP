#include <stdio.h>

int main()
{
    long long arr[100001];
    arr[1]=1, arr[2]=2, arr[3]=4;
    for(int i=4;i<=100000;i++){
        arr[i]=(2*(arr[i-1]%1000000007)%1000000007)+(arr[i-2]%1000000007);
    }
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        printf("%lld\n", arr[n]);
    }
}
