#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        vector<pair<pair<pair<int, int>, int>, string> > pst;
        pair<pair<pair<int, int>, int>, string> temp;
        int n, m;
        cin>>n>>m;
        string cek;
        cin>>cek;
        for(int i=0;i<n;i++){
            cin>>temp.s>>temp.f.s>>temp.f.f.s>>temp.f.f.f;
            pst.push_back(temp);
        }
        sort(pst.begin(), pst.end());
        bool lulus=false;
        for(int i=0;i<m;i++){
            if(pst.back().s == cek) lulus=true;
            pst.pop_back();
        }
        if(lulus) puts("YA");
        else puts("TIDAK");
    }
    return 0;
}
