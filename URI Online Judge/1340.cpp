#include <bits/stdc++.h>
using namespace std;

int main(){
    bool qw=false, st=false, pqw=false;
    int n;
    while(scanf("%d", &n)){
        list<int> vc;
        int a, b;
        for(int i=0;i<n;i++){
            scanf("%d%d", &a, &b);
            if(a==1) vc.push_back(b);
            else if(a==2){
                if(vc.front()==b) vc.pop_front();
                else if(vc.back()==b) vc.pop_back();
                else
            }
        }
    }
}
