#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<string> vc;
    int r, c;
    cin>>r>>c;
    for(int i=0;i<r;i++){
        string s; int cnt=0;
        cin>>s;
        for(int it=0;it<s.size();it++){
            cnt+=(s[it]-'0');
        }
        if(cnt!=c) vc.push_back(s);
    }
    cout<<endl;
    while(!vc.empty()){
        cout<<vc.back()<<endl;
        vc.pop_back();
    }
}
