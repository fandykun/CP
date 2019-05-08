#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int maks=(a>b) ? a : b;
    int A=6-maks+1;
    if(A==1) printf("1/6\n");
    else if(A==2) printf("1/3\n");
    else if(A==3) printf("1/2\n");
    else if(A==4) printf("2/3\n");
    else if(A==5) printf("5/6\n");
    else if(A>=6) printf("1/1\n");
}
