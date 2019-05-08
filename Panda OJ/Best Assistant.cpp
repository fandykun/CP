#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, m, k;
    scanf("%d%d%d", &n,&m,&k);
    int x;
    float s;
    vector<float> vc (n,0);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d %f", &x, &s);
            if(vc[x-1]<s) vc[x-1]=s;
        }
    }
    float ans=0;
    sort(vc.begin(), vc.end());
    for(int i=0;i<k;i++){
        ans+=vc.back();
        vc.pop_back();
    }
    printf("%.1f\n", ans);
}
