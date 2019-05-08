#include <bits/stdc++.h>
using namespace std;
#define EPS 1e-9
const int M = 825;
const int N = 125;

struct edge{
    int u, v;
    double a, b, val;
    bool operator<(edge other) const{
        return val < other.val;
    }
};

edge arr[M];
int pset[N];
int n, m, tc;
double t1, t2;

void reset(){
    for(int i = 0;i < n;i++) pset[i] = i;
}

int finds(int x){
    return x == pset[x] ? x : pset[x] = finds(pset[x]);
}

double work(double t){
    reset();
    for(int i = 0;i < m;i++) arr[i].val = t*arr[i].a + arr[i].b;
    sort(arr, arr+a);
    double res = 0;
    for(int i = 0;i < m;i++){
        int uu = arr[i].u;
        int vv = arr[i].v;
        if(finds(uu) != finds(vv)){
            pset[finds(uu)] = vv;
            res += arr[i].val;
        }
    }
    return res;
}

int main(){
    scanf("%d", &tc);
    while(tc--){
        scanf("%d%d" &n, &m);
        scanf("%lf%lf", &t1, &t2);
        for(int i = 0;i < m;i++) scanf("%d%d%lf%lf", )
    }
}
