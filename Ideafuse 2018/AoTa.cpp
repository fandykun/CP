#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, string> a, pair<int, string> b){
    if(a.first != b.first) return (a.first>b.first);
    if(a.second != b.second) return (a.second<b.second);
}

int main(){
    map<string, int> cek;
    vector<string> aota;
    for(int i=0;i<8;i++){
        string s;
        cin>>s;
        aota.push_back(s);
        cek.insert(pair<string, int> (s, 0));
    }
    for(int i=0;i<28;i++){
        string a, b; char s; int x, y;
        cin>>a>>x>>s>>y>>b;
        if(x>y){
            cek[a]++;
        }else cek[b]++;
    }
    vector<pair<int, string> > ans;
    for(int i=0;i<aota.size();i++){
        ans.push_back(make_pair(cek[aota[i]], aota[i]));
    }
    sort(ans.begin(), ans.end(), cmp);
    for(int i=0;i<aota.size();i++){
        cout<<ans[i].second<<" "<<ans[i].first<<endl;
    }
}
