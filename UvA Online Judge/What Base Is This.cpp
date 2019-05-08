#include <stdio.h>
#include <string.h>

void balik(char s[]){
    int i=0, maks=strlen(s)-1;
    while(i<maks){
        char temp=s[i];
        s[i]=s[maks];
        s[maks]=temp;
        maks--;
        i++;
    }
}

int power(int n, int i)
{
    int mult=1, a;
    if(i==0) return 1;
    for(a=1;a<=i;a++){
        mult*=n;
    }
    return mult;
}

int basis(char s[], int base)
{
    int temp, ans=0, i;
    for(i=0;i<strlen(s);i++){
        if('A'<=s[i] && s[i]<='Z'){
            temp=s[i]-'A'+10;
        }else temp=s[i]-'0';
        if(temp>=base){
            ans=-1;
            i=strlen(s);
        }else ans=ans+(temp*power(base, i));
    }
    return ans;
}

int main()
{
    char a[100], b[100];
    while(scanf("%s %s", &a, &b)!=EOF){
        int i, j, base1=2, base2, ans1, ans2, cek=0;
        balik(a);
        balik(b);
        while(base1<=36){
            base2=2;
            ans1=basis(a, base1);
            while(base2<=36){
                ans2=basis(b, base2);
                if(ans1 >=0 && ans1==ans2) {
                    balik(a);
                    balik(b);
                    printf("%s (base %d) = %s (base %d)\n", a, base1, b, base2);
                    base1=40;
                    base2=40;
                    cek=1;
                }
                else base2++;
            }
            base1++;
        }
        if(cek==0) {
                balik(a);
                balik(b);
                printf("%s is not equal to %s in any base 2..36\n", a, b);
        }
    }
}
