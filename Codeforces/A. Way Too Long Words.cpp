#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        char s[101];
        scanf("%s", &s);
        int slen=strlen(s);
        if(slen>10){
            printf("%c%d%c\n",s[0], slen-2, s[slen-1]);
        }else printf("%s\n", s);
    }
}

