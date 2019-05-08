#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, k; scanf("%d%d", &n, &k);
        int val[n];
        deque<int> dq;
        for(int i=0;i<n;i++) scanf("%d", &val[i]);
        for(int i=0;i<k;i++){
            while(!dq.empty() && val[i]>=val[dq.back()]) dq.pop_back();
            dq.push_back(i);
        }
        printf("%d", val[dq.front()]);
        for(int i=k;i<n;i++){
            while(!dq.empty() && dq.front()<=i-k) dq.pop_front();
            while(!dq.empty() && val[i]>=val[dq.back()]) dq.pop_back();
            dq.push_back(i);
            printf(" %d", val[dq.front()]);
        }
        printf("\n");
    }
    return 0;
}
