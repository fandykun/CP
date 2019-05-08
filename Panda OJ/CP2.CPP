#include <stdio.h>

int main(){
    int arr[10000];
    for(int i=0;i<10; i++){
        arr[i]=((i+2)*(i+2)*(i+2)-(i+2))/6;
        printf("%d\n", arr[i]);
    }
    int tc;
    scanf("%d", &tc);
    for(int i=1;i<=tc;i++){
        int n, uang;
        scanf("%d %d", &n, &uang);

    }
}
