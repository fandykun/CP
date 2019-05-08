#include <stdio.h>

int main()
{
    int alas, tinggi;
    double luas;
    printf("Masukkan alas segitiga: ");
    scanf("%d", &alas);
    printf("Masukkan tinggi segitiga: ");
    scanf("%d", &tinggi);
    luas = alas*tinggi/2;
    printf("Luas segitiga tersebut adalah : %lf", luas);
    return 0;
}
