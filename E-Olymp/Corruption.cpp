#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, P;
    long double count, x, fee, ans;
    scanf("%d%d", &N, &P);
    priority_queue<long double, vector<long double>, greater<long double> > merge;
    for(int i = 0;i < N; i++) {
        scanf("%Lf", &x);
        merge.push(x);
    }
    fee = 100.0 - P;
    while(!merge.empty()) {
        count = merge.top(); 
        merge.pop();
        if(merge.empty()) ans = count;
        else {
            count = (count*100.0 + merge.top()*100.0 )*fee;
            merge.pop();
            count/=100.0;
            count = roundl(count) / 100.0;
            merge.push(count);
        }
    }
    printf("%.2Lf\n", ans);
}