#include <cstdio>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
void getStr(char* res)
{
    char c;
    while (1) {
        c=getchar();
        if (c==' ' || c=='\n') continue;
        else break;
    }
    *res=c;res++;
    while (1) {
        c=getchar();
        if (c==' ' || c=='\n' || c==EOF) break;
        *res=c;res++;
    }
    *res='\0';
}

int getInt(){
    int r=0;
    char c;
    while(1){
        c=getchar();
        if(c==' ' || c=='\n') continue;
        else break;
    }
    r=c-'0';
    while(1){
        c=getchar();
        if(c>='0'&&c<='9') r=10*r+c-'0';
        else break;
    }
    return r;
}

typedef struct{
    char name[20];
    int a, v, s;
}hero;

bool cmp(hero a, hero b){
    if(a.a != b.a) return (a.a>b.a);
    if(a.v != b.v) return (a.v>b.v);
    if(a.s != b.s) return (a.s<b.s);
    return (strcmp(a.name, b.name)<0);
}

int main(){
    vector <hero> vc_hero;
    int n, ta, tv, ts;
    char nama[20];
    n=getInt();
    for(int i=0; i<n; i++){
        hero tmp;
        getStr(nama); ta=getInt(); tv=getInt(); ts=getInt();
        strcpy(tmp.name, nama); tmp.a=ta; tmp.v=tv; tmp.s=ts;
        vc_hero.push_back(tmp);
    }
    sort(vc_hero.begin(), vc_hero.end(), cmp);
    for(int i=0; i<n;i++){
        printf("%s\n", vc_hero[i].name);
    }
    return 0;
}
