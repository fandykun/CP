#include <stdio.h>

int main(){
    int n, p ,q;
    scanf("%d", &n);
    int arr[101]={0};
    scanf("%d", &p);
    while(p--){
        int x;
        scanf("%d", &x);
        arr[x]++;
    }
    scanf("%d", &q);
    while(q--){
        int x;
        scanf("%d", &x);
        arr[x]++;
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        if(arr[i]>0) ans++;
    }
    if(ans==n) printf("I become the guy.\n");
    else printf("Oh, my keyboard!\n");
}
